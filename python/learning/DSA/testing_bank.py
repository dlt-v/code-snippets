'''
ABOUT: Small projects aimed to introduce hint checking.
Part of a webinar by Daniel from JetBrains.
https://youtu.be/JqBCFfiE11g
'''

from typing import Dict, NamedTuple, List, Optional  # smart imports!

# SpendResult = Tuple[bool, int]  # creating types


class SpendResult(NamedTuple):
    is_successful: bool
    balance: int


class Account(object):
    def __init__(self, name: str, initial_balance: int) -> None:
        self.name = name
        self.initial_balance = initial_balance

    def credit(self, value: int) -> bool:  # Hinting supports branching!
        if value <= 0:
            return False
        self.initial_balance += value
        return True

    def spend(self, value: int) -> SpendResult:
        if value <= 0:
            return SpendResult(False, self.initial_balance)
        if self.initial_balance < value:
            return SpendResult(False, self.initial_balance)

        self.initial_balance -= value
        return SpendResult(True, self.initial_balance)


class Customer(object):
    # normally we want to declare such classes after we use them as types. although you can omit this by "stringifying" them :)
    def __init__(self, name: str) -> None:
        self.name = name
        self.accounts: List[Account] = []
        self.primary_account_name: Optional[str] = None

    def find_account_by_name(self, name: str) -> Optional[Account]:
        for account in self.accounts:
            if account.name == name:
                return account
        return None

    def add_account(self, account: Account) -> None:
        self.accounts.append(account)

    @property
    # another way of creating an optional type - a union
    def primary_account(self) -> None | Account:
        if self.primary_account_name is None:
            return None
        return self.find_account_by_name(self.primary_account_name)


class Bank(object):
    def __init__(self) -> None:
        self.name_to_customer: Dict[str, Customer] = {}

    def add_customers(self, customers: List[Customer]) -> List[bool]:
        result: List[bool] = []
        for customer in customers:
            if customer.name in self.name_to_customer:
                result.append(False)
            else:
                self.name_to_customer[customer.name] = customer
                result.append(True)

        return result

    def transfer_funds(self, from_customer: str, to_customer: str, value: int) -> bool:
        if from_customer not in self.name_to_customer or to_customer not in self.name_to_customer:
            return False

        primary_account_from = self.name_to_customer[from_customer].primary_account
        primary_account_to = self.name_to_customer[to_customer].primary_account

        if primary_account_to is None or primary_account_from is None:
            return False

        if primary_account_from.spend(value).is_successful:
            primary_account_to.credit(value)
            return True
        return False
