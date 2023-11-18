from abc import ABC, abstractmethod

class Animal(ABC):      # Create an abstract class (inherit from ABC (Abstract Base Class))
    
    @abstractmethod
    def valk(self): pass

    @abstractmethod
    def run(self): pass


class Bird(Animal):  # If we inhert from an abstract class, we must write all of abtract class' methods
    def __init__(self):
        print("bird called")

    def valk(self):
        print("Bird Walk")

    def run(self):
        print("Bird Run")



# a= Animal()  # Cant make an object from Abstract Class
b1= Bird()