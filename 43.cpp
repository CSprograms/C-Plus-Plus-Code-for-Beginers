// Namespace
#include <iostream>
using namespace std;
namespace square
{
    int op;
}
namespace cube
{
    int op;
}
using namespace square;
int main () {
    int ip=5;

    op = ip * ip;
    cube::op = ip * ip * ip;

    cout<<"Input : "<<ip<<endl;

    cout<<"Square : "<<op<<endl;

    cout<<"Cube : "<<cube::op<<endl;

return 0;
}