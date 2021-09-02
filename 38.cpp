//
// Stack using Built-In class
//
#include <stack>
#include <iostream>
using namespace std;
void display(stack<char> &);

int main()
{
    stack<char> object;
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
                    cout<<"Stack is empty."<<endl;
                else {
                    cout<<"Element on TOP : "<<object.top()<<endl;
                    object.pop();
                    cout<<"Element Deleted."<<endl;
                }
                break;
            case 3:
                if(object.empty())
                    cout<<"Stack is empty."<<endl;
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

void display(stack<char> &ptr)
{
    char element;
    element = ptr.top();
    cout<<element<<"\t";
    ptr.pop();
    if(!ptr.empty())
        display(ptr);
    ptr.push(element);
                    //1     2   3
                    //3                 1   2                       1   2       3
                    //2                 1                           1   2
                    //1                 null                        1
}