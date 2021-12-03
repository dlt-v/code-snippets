class Account():
    def __init__(self, title=0, balance=0):
        self.title = title
        self.balance = balance

    def getBalance(self):
        return self.balance

    def deposit(self, amount):
        self.balance += amount

    def withdrawal(self, amount):
        self.balance -= amount


class SavingsAccount(Account):
    def __init__(self, title=0, balance=0, interestRate=0):
        super().__init__(title, balance)
        self.interestRate = interestRate

    def interestAmount(self):
        return (self.balance * self.interestRate) / 100

my_bank_account = SavingsAccount('Thomas', 2000, 5)

print(my_bank_account.getBalance())
print(my_bank_account.deposit(500))
print(my_bank_account.getBalance())

print(my_bank_account.interestAmount())