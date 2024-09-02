#include <iostream>
using namespace std;
// OOP-Abstraction!!
class SalaryRaise{
    virtual void DeserveRaise()=0;
};
class BankEmployees:SalaryRaise {
public:
    int EmployeeAge;
    string EmployeeName;
    int YearsOfExperience;
    int EmployeeSalary;
    BankEmployees(string Name,int Age,int Experience,int Salary){
        EmployeeName = Name;
        EmployeeAge = Age;
        YearsOfExperience = Experience;
        EmployeeSalary = Salary;
    }
    void DeserveRaise(){
        if(YearsOfExperience>=10){
            EmployeeSalary+=3000;
            cout<<"Your salary has been increased by 3,000 pounds. Your new salary is now "<<EmployeeSalary<<" pounds"<<endl;
        }
        else{
            cout<<"I regret to inform you that we were unable to increase your salary at this time.";
        }
    }
};
int main() {
    string Name;
    int Age,Experience,Salary;
    cout<<"Enter your name:";
    cin>>Name;
    cout<<"Enter your age:";
    cin>>Age;
    cout<<"Enter your experience years:";
    cin>> Experience;
    cout<<"Enter your current salary:";
    cin>>Salary;
    BankEmployees e1= BankEmployees(Name,Age,Experience,Salary);
    e1.DeserveRaise();
    return 0;
}
