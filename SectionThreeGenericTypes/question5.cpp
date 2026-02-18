// Generic types allow coders to create algorithms that work with any data type.
// In this case, it'll allow us to make objects that can take pairs of any data type.

using namespace std;
#include <iostream>
// Used for templates - needed in building generic types.
#include <typeinfo>

//Generic types are defined using templates.
template <class T, class U>

//Pair class
class Pair
{
    //Stores two generic object types from template T and U.
    T x;
    U y;

    public:
    // Pair() returns the first letter of each of the data type's.
    Pair()
    {
        //typeof().name used to get the first letter.
        cout << typeid(x).name() << " " << typeid(y).name() << endl;
    }
};

int main(){
    //Creating and Printing 5 different kind of pairs.
    cout << "Pair a: \n" << endl;
    Pair<int,int> a;

    cout << "\nPair b:\n" << endl;
    Pair<bool,char> b;

    cout << "\nPair c:\n" << endl;
    Pair<int, char> c;

    cout << "\nPair c:\n" << endl;
    Pair<double, int> d;

    cout << "\nPair e:\n" << endl;
    Pair<float,double> e;

    cout << "\n" << endl;
    return 0;
};
