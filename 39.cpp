//
// Queue using Built-In class
//
#include <queue>
#include <iostream>
using namespace std;
void display(queue<char> &);

int main()
{
    queue<char> object;
    int choice;
    char value;

    do {
        cout<<"1 - PUSH"<<endl;
        cout<<"2 - POP"<<endl;
        cout<<"3 - Display"<<endl;
        cout<<"4 - EXIT"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter a value to push : ";
                cin>>value;
                object.push(value);
                break;
            case 2:
                if(object.empty())
                    cout<<"Queue is empty."<<endl;
                else {
                    cout<<"Element on Front : "<<object.front()<<endl;
                    object.pop();
                    cout<<"Element Removed."<<endl;
                }
                break;
            case 3:
                if(object.empty())
                    cout<<"Queue is empty."<<endl;
                else
                    display(object);
                break;
            case 4:
                cout<<"Program ends"<<endl;
                break;
            default:
                cout<<"Invalid Input"<<endl;
        }
    }while(choice != 4);

    return 0;
}

void display(queue<char> &ptr)
{
    char element;
    int loop;
    cout<<"Elements : ";
    for(loop = 0; loop <ptr.size(); loop++)
    {
        element = ptr.front();
        cout<<element<<"\t";
        ptr.pop();
        ptr.push(element);
    }
    cout<<endl;         //  1   2   3           : 1             2   3   1
                                // 2    3   1           :   2           3   1   2
                                //3     1   2           :   3           1   2   3
}