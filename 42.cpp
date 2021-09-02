// Class Template
#include <iostream>
using namespace std;
template <class T>

class maximum
{
    T op;
public:
    maximum(T arg1, T arg2)
    {
        op = (arg1 > arg2)? arg1 : arg2;
    }
    T GetMax()
    {
        return op;
    }
};


int main () {
    maximum<char> object1('a', 'A');            // a : 97       A : 65

    maximum<int> object2(5, 6);

    maximum<float> object3(10.5, 5.1);

    cout<<"Max char : "<<object1.GetMax()<<endl;

    cout<<"Max int : "<<object2.GetMax()<<endl;;

    cout<<"Max float : "<<object3.GetMax()<<endl;

return 0;
}