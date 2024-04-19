class Student:
    def __init__(self, RollNo, name):
        self.RollNo=RollNo
        self.name=name

    def info(self):
        print("About Student: \nName:",self.name, "\nRoll No.:", self.RollNo)

s1=Student(100,'Raj')
s1.info()
print(Student.__doc__)