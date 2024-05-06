class Base:
    def showB(self):
        print("Hello from Base Class...")

class Derived(Base):
    def showD(self):
        print("Hello from Derived Class...")

class Derived1(Base):
    def showD1(self):
        print("Hello from Derived 1 Class...")

class Derived2(Base):
    def showD2(self):
        print("Hello from Derived 2 Class...")

objDerived = Base()
objDerived.showB()

objDerived = Derived()
objDerived.showB()
objDerived.showD()

objDerived = Derived1()
objDerived.showB()
objDerived.showD1()

objDerived = Derived2()
objDerived.showB()
objDerived.showD2()