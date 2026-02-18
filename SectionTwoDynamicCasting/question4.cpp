// Casting, aka typecasting, is a feature in C++ that allows us
// to change one data type safely to another. 


// dynamic_cast is a cast operator that converts data from one type to
// another type at runtime.

#include <iostream>
using namespace std;

class Object
{ 
    public: 
        virtual void printMe() = 0; 
};

class Place : public Object
{ 
    public: 
        virtual void printMe() 
        { 
            cout << "Buy it. \n ";
        } 
};

class Region : public Place
{ 
    public: 
        virtual void printMe() 
        { 
            cout << "Box it. \n" ; 
        } 
};

class State : public Region
{ 
    public: 
        virtual void printMe()
         { 
            cout << "Ship it. \n"; 
        } 
};

class Maryland : public State
{ 
    public: 
        virtual void printMe()
        { 
            cout << "Read it. \n"; 
        } 
};

int main() {

// pointers that assigned classes in dynamic memory.
Region* mid = new State;
State* md = new Maryland;
Object* obj = new Place;
Place* usa = new Region;

// Test that the pointers are calling the right things. 
// (md should print Maryland's public members, since md points at
//  a new class that is copied from Maryland in the dynamic memory).
md->printMe();
mid->printMe();

// Using the Place* pointer, access the obj value - Place.
(dynamic_cast <Place*> (obj)) -> printMe();

//Using Maryland* pointer, access the md value - Maryland
obj = md;
(dynamic_cast <Maryland*> (obj)) -> printMe();

// Using the Place* pointer, access the usa value - Region
obj = usa;
(dynamic_cast <Place*> (obj)) -> printMe();

// Using the Place* pointer, access the md value - Maryland
usa = md;
(dynamic_cast < Place*> (usa)) -> printMe();


// EXIT_SUCCESS can be used in main to end the function.
return EXIT_SUCCESS;
}
