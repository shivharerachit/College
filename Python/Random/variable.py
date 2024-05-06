class Student:
    cname='AITR'
    def __init__(self, RollNo, name, add):
        count=0
        self.RollNo=RollNo
        self.name=name
        self.add=add

    def info(self):
        print("About Student:\nRoll No.:", self.RollNo, "\nName:", self.name, "\nAddress:", self.add)

    @classmethod
    def GetCollegeName(cls):
        print(cls.cname)

    @staticmethod
    def FindAve(x, y):
        print("Average is :",(x+y)/2)        


s1=Student(50, "Ram", "Indore")
s1.info()
s1.FindAve(5,10)
s1.GetCollegeName()