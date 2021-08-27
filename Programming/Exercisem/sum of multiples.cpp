#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
int x;
int sum;
int c=0;
cout<<"enter a numer : ";
cin>>x;
for(int i=5;i<x;i+=5){
cout<<i<<endl;
sum=c+i;
c=sum;
}
cout<<sum;

return 0;
}