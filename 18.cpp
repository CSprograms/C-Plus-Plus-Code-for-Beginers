// Creating a class - Encapsulation - Data Hiding
#include <iostream>
using namespace std;
class io
{
public:
    void read(void);
    void print(void);
private:
    int value;
};
void io :: read(void)
{
    cout<<"Enter a integer value : ";
    cin>>value;
}
void io :: print(void)
{
    cout<<"The given value is "<<value<<"."<<endl;
}
int main()
{
   io object;
   object.read();
   object.print();

return 0;
}
