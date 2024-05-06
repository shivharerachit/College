class Base:
    def showB(self):
        print("Hello from Base Class...")


class Derived(Base):
    def showD(self):
        print("Hello from Derived Class...")

objDerived = Derived()
objDerived.showB()
objDerived.showD()