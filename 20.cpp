// Using a class in header file
#include <iostream>
#include "io.h"
using namespace std;

int main()
{
   io object;
   object.print();

   object.read();
   object.print();

return 0;
}
