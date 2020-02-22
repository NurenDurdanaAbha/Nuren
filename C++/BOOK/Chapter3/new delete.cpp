#include<iostream>

using namespace std;

int main()
{
    ///Allocates using new operator memory space in memory for staring a integer data type

    int *a = new int;

    *a = 100;

    cout<<"The Output is: a = "<<*a;

    ///Memory released using delete operator

    delete a;
}
