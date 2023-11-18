class BankAccount:
    def __init__(self, name, money, adress):    # constructor
        self.name= name         # public variable
        self.__money= money     # private variabe
        self.adress= adress

    def getMoney(self):         # getter method
        return self.__money

    def setMoney(self, amounth):    # setter method
        self.__money= amounth
