// Generic types allow coders to create algorithms that work with any data type.
// In this case, it'll allow us to make objects that can take pairs of any data type.

using namespace std;
#define PRINTER(name) printer(#name, (name))
#include <iostream>
#include <typeinfo>

//Generic types are defined using templates.
template <class T, class U>

class Pair
{
    T x;
    U y;

    public:
    Pair()
    {
        cout << typeid(x).name() << " " << typeid(y).name() << endl;
    }
};

int main(){
    Pair<int,int> a;
    Pair<bool,char> b;
    Pair<int, char> c;
    Pair<double, int> d;
    Pair<float,double> e;
    return 0;
};
