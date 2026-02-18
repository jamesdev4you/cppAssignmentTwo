// Inheritance is a OOP feature in cpp that allows one class to inherit
// the features of another class. 

// Classes are a characterization of attributes that can be given to 
// variables. 
    // You call a class by using it inside of main:
    /*
        int main()
        {
            Class variable;  <--- would call all of the attributes.
        }
    */

// Classes and Inheritance techniques require "using namespace std;"
// For input/output: #include <iostream>


// Classes are defined as: 
/* 
    
    class Animal: 
    {
        public:
            variableType variableName(){
                action(s)
            }
        }
*/ 

// SubClasses are defined as: 
/*
    class Dog : public Animal 
    {
        public:
            variableType variableName()
            {
                action(s). These will replace Animal's default actions.
            }
    }
*/

// There are 5 types of Inheritances in c++. 
// Single inheritance, Multiple inheritance, Hybrid inheritance, 
// Multilevel inheritance, and Hierarchical inheritance




#include <iostream>
using namespace std;



class Person
{
    public: 
    Person()
    {
        cout << "Hello, I am a person!" << endl;
    }
};

class Student : public Person
{
    public: 
        string major;
        Student()
        {
            cout << "Hello, I am a student!" << endl;
        }
};

class Faculty : public Person 
{
    public: 
    int wage;
    Faculty()
    {
        cout << "Hey there - I work at USF!" << endl;
    }

};

class UndergraduateStudent : public Student
{
    public: 
    bool expectedToPass;
    UndergraduateStudent()
    {
        cout << "I hope I can get my degree soon!" << endl;
    }
};

class GraduateStudent : public Student
{
    public: 
    int debt;
    GraduateStudent()
    {
        cout << "I hope I can get my Masters soon! Or I guess PhD! Idk!" << endl;
    }
};

class Professor : public Faculty
{
    public:
    
    bool hasTenure = true;
    Professor()
    {
        cout << "I am paid to help students learn and research" << endl;
    }
};

class Instructor : public Faculty
{
    public:
    
    Instructor()
    {
        cout << "I instruct here! But I am not a professor. Maybe a TA?" << endl;
    }
};


int main()
{
    Student James;
    Person Erick;
    UndergraduateStudent Mitch;
    GraduateStudent Roland;
    Professor Taseef;
    Instructor TAGradingThis;
    Taseef.wage = 100000; 
    cout << Taseef.wage << endl;
    Roland.debt = 2990122;
    cout << Roland.debt << endl;
    cout << Taseef.hasTenure << endl;

    return 0;
}


//QUESTION TWO:
// The inheritance structure here is Hybrid Inheritance. The two 
// inheritance structures it is using is Multilevel
// (person -> faculty -> ect), and Hierarchial (Person -> faculty & student)


