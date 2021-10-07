//COMPARE TWO STRING USING COMPARE FUNCTION
#include<iostream>
#include<string>
using namespace std;
int main()
{

string a , b;

cout<<"ENTER THE STRING A :"<<endl;
cin>>a;
cout<<"ENTER THE STRING B :"<<endl;
cin>>b;
int x=a.compare(b);

if(x==0)
{
cout<<"BOTH STRINGS ARE EQUAL"<<endl;
}
else if(x>0)
{
cout<<"FIRST STRINGS IS GREATER "<<endl;
}
else
{
cout<<"FIRST STRINGS IS LESSER "<<endl;
}

return 0;
}
