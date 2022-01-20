// In C++, inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically.
// Single inheritance-- is defined as the inheritance in which a derived class is inherited from the only one base class.

#include<iostream>
using namespace std; // this is namespace

class Teacher{
    public:
    Teacher(){
        cout<<"Hey, I'm a Teacher"<<endl;
    }
    string collegeName = "YouTube College";
};

class MathTeacher: public Teacher{
    public:
    MathTeacher(){
        cout<<"I'm a math teacher"<<endl;
    }
};

int main ()
{
    MathTeacher obj; //ojbect of techer class automatically created and called.
    cout<<"College Name is: "<<obj.collegeName<<endl; //object is created automatically 
    return 0;
}