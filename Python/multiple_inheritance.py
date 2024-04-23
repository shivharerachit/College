class Base:
    def showB(self):
        print("Hello from Base Class...")

class Base1:
    def showB1(self):
        print("Hello from Base 1 Class...")

class Base2:
    def showB2(self):
        print("Hello from Base 2 Class...")

class Derived(Base, Base1, Base2):
    def showD(self):
        print("Hello from Derived Class...")

objDerived = Derived()
objDerived.showB()
objDerived.showB1()
objDerived.showB2()
objDerived.showD()