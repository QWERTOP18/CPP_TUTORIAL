#include "iter.hpp"

/* 
Implement a function template iter that takes 3 parameters and returns nothing.
• The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be called on every element of the array. 
*/

/*
void consoleLog(void  &item)  NG
cout << *voidItem NG
*/


template<typename T>
void consoleLog(T item)
{
    std::cout << item << std::endl;
}

int main()
{
    int intArr[] = {1,2,3,4};
    ::iter(intArr, 4, consoleLog);

    std::string strArr[] = {"Hello", "Are", "you" ,"Happy?"};
    ::iter(strArr, 4, consoleLog);

    return 0;
}