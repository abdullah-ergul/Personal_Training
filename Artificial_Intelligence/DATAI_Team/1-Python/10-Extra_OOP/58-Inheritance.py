class Animal:
    def __init__(self):
        print("Animal Class Called")

    def __str__(self):
        return "Animal"
    
    def toString(self):
        print("This is an Animal")

    def eat(self):
        print("Animal Eats!")


class Dog(Animal):
    def __init__(self):
        super().__init__()
        print("Dog Class Called")

    def __str__(self):
        return "Dog"

    def toString(self):
        print("This is a Dog")

    def bark(self):
        print("Bark! Bark!")


class Cat(Animal):
    def __init__(self):
        super().__init__()
        print("Cat Class Called")

    def __str__(self):
        return "Cat"

    def toString(self):
        print("This is a Cat")

    def meuw(self):
        print("Meuuw!")



a= Animal()
c= Cat()
d= Dog()

print(a)
print(c)
