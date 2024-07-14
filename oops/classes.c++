#include<iostream>
using std::string;



class  Employee{
    public:
    string Name;
    string Company;
    int Age;

    void introduce(){
        std::cout<<"Name is " <<Name<< std::endl;
        std::cout<<"Company is " <<Company<< std::endl;
        std:: cout<<" Age is " <<Age<< std::endl;

    }
//constructor
public:
    Employee(string name, string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }
};



int main(){

Employee emp1=Employee("Vignesh ","Google",21);
// emp1.Company="google";
// emp1.Name="Vignesh";
// emp1.Age=21;
emp1.introduce();   //directly with constructor


// Employee emp2;
// emp1.Company="amazon";
// emp1.Name="Ryan";
// emp1.Age=25;
// emp1.introduce();




}