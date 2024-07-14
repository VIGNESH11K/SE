#include<iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class  Employee:AbstractEmployee{
    private:
    string Name;
    string Company;
    int Age;

// public:
//  void setName(string name){ //setter
//     Name=name;
//  }

// string getName(){  //getter
//     return Name;
// }

// void setCompany(){
//     Company=company;
// }

// string getName(){
//     return Company;
// }

// void setAge(){
//     Age=age;
// }

// int getAge(){
//     return Age;
// }


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
    void AskForPromotion(){
        if(Age>30)
        std::cout<<Name<<"got promoted"<<std::endl;
        else
        std::cout<,Name<<"Soory nothing for u"<<std::endl;

    }
};




int main(){

Employee emp1=Employee("Vignesh ","Google",21);
Employee emp2=Employee("Chirs ","meta",90);
// emp1.setAge(39);
// std::cout<<emp1.getName()<<"is"<<emp1.getAge()<<"year"<<std::endl;


emp1.AskForPromotion();
emp2.AskForPromotion();

// emp1.introduce();   //directly with constructor


// Employee emp2;
// emp1.Company="amazon";
// emp1.Name="Ryan";
// emp1.Age=25;
// emp1.introduce();






}