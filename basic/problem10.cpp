//Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.
/*SAMPLE OUTPUT :
Print the name in reverse where last name comes first:                
-----------------------------------------------------------            
 Input First Name: Alexandra                                           
 Input Last Name: Abramov                                              
 Name in reverse is: Abramov Alexandra 
 */

#include<iostream>
using namespace std;

int main()
{
    char f[20],l[20];
    cout<<"Print the name in reverse where last name comes first:"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"Input First Name : ";
    cin>>f;
    cout<<"Input Last Name : ";
    cin>>l;
    cout<<"Name in reverse is : "<<l<<" "<<f<<endl;
}