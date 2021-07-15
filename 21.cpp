// Argumented Constructor with Default Value
#include <iostream>
using namespace std;

class io
{
    int data1,data2;
public:
    io(int arg1 = 0, int arg2 = 0) {
        data1 = arg1;
        data2 = arg2;
    }
    void getData() {
        cout<<"Data 1 : "<<data1<<endl;
        cout<<"Data 2 : "<<data2<<endl;
    };
};

int main() {

   io object1;
   cout<<"The object 1 value : "<<endl;
   object1.getData();

   io object2(10);
   cout<<"The object 2 value : "<<endl;
   object2.getData();

   io object3(10,20);
   cout<<"The object 3 value : "<<endl;
   object3.getData();

return 0;
}
