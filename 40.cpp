// exceptions -- total and average of marks
#include <iostream>
using namespace std;

int main () {
    int mark[3], total=0;
    float average;
    try
    {
        for(int loop=0; loop < 3; ++loop)
        {
            cout<<"Enter mark["<<loop<<"] : ";
            cin>>mark[loop];

            if( 0 > mark[loop] )
                throw -1;
            if( 100 < mark[loop] )
                throw 101;

            total += mark[loop];
        }

        average = total / 5.0;

        cout<<"Total : "<<total<<endl;
        cout<<"Average : "<<average<<endl;
    }

  catch (int e)
  {
      if( -1 == e)
        cout << "Negative value are not accepted as mark"<< endl;

      if( 101 == e)
        cout << "Value greater than 100 are not accepted as mark"<< endl;
    }

  return 0;
}