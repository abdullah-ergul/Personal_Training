class Employee:
    
    def raisee(self):
        raise_rate= 0.1
        result= 100 + 100 * raise_rate
        print("Employee: ", result)


class CopmEng(Employee):

    def raisee(self):
        raise_rate= 0.2
        result= 100 + 100 * raise_rate
        print("CompEng: ", result)


class EEE(Employee):

    def raisee(self):
        raise_rate= 0.3
        result= 100 + 100 * raise_rate
        print("EEE: ", result)



e1= Employee()
ce= CopmEng()
eee= EEE()

employeeList= [e1, ce, eee]

for employee in employeeList:
    employee.raisee()
