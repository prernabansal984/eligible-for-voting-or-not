#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age>=18)
    {
        cout<<"\n You are eligible for voting !";
    }
    else
    {
        cout<<"\n You are under age.";
    }
    return 0;
}
