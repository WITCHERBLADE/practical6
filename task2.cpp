#include<iostream>
#include<string>
using namespace std;
int main(){
   string b="";
   cout<<"enter the string :";
   cin>>b;
   int l=b.size()-1;
   for(int i=0;i<b.size()/2;i++){
     if(b[i]!=b[l--]){
       cout<<"not palindrome"<<endl;
       return 0;
     }}
     cout<<"palindrome"<<endl;
   
return 0;}
