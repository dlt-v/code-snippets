

from typing import NamedTuple, List  # smart imports!

# SpendResult = Tuple[bool, int]  # creating types


class SpendResult(NamedTuple):
    is_successful: bool
    balance: int


class Customer(object):
    # normally we want to declare such classes after we use them as types. although you can omit this by "stringifying" them :)
    def __init__(self, name: str) -> None:
        self.name = name
        self.accounts: List[Account] = []

    def find_account_by_name(self, name: str) -> 'Account':
        for account in self.accounts:
            if account.name == name:
                return account
        return None


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
