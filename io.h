//Creating a class io as io.h
#ifndef IO_H_INCLUDED
#define IO_H_INCLUDED

#include <iostream>
class io
{
public:
    void read(void);
    void print(void);
    io();
private:
    int value;
};
io :: io()
{
    value = 0;
}
void io :: read(void)
{
    std::cout<<"Enter a integer value : ";
    std::cin>>value;
}
void io :: print(void)
{
    std::cout<<"The given value is "<<value<<"."<<std::endl;
}

#endif // IO_H_INCLUDED
