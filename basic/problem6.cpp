//Write a program in C++ to display the operation of pre and post increment and decrement.

#include<iostream>
using namespace std;

int main()
{
    int num=57;
    cout<<"the number is "<<num<<endl;
    num++;
    cout<<"\n After post increment the number is "<<num<<endl;
    ++num;
    cout<<"\n After pre increment the number is "<<num<<endl;
    num=num+1;
    cout <<"\nAfter increasing by 1 the number is " << num << endl;
    num--;
    cout<<"\nAfter post decrement the number is "<<num<<endl;
    --num;
    cout<<"\nAfter pre decrement the number is "<<num<<endl;
    num=num-1;
    cout <<"\n After decreasing by 1 the number is " << num << endl;
    

    

}