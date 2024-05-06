class Base:
    def showB(self):
        print("Hello from Base Class...")

class Derived(Base):
    def showD(self):
        print("Hello from Derived Class...")

class Derived1(Derived):
    def showD1(self):
        print("Hello from Derived 1 Class...")

objDerived = Derived1()
objDerived.showB()
objDerived.showD()
objDerived.showD1()