#include<iostream>
using namespace std;


int main()
{
    int first;
    int second;
    cout<<"Enter first integer :";
    cin>> first;
    cout<<"Enter second integer :";
    cin>>second;
    if(first>second)
    cout<<"first integer is greater";
    else if(second>first)
    cout<<"second is greater";
    else
    cout<<"Both the integers are equal";
    


    return 0;
}
