#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;
int main()
{
int a,b,sum;
int c=0;
string bin;
cout<<"enter the binary code: ";
cin>>bin;
int x=bin.size();
for (int i=x-1;i>=0;i--){

if (bin[i]=='1'){
a=1*pow(2,i);

}
else if (bin[i]=='0'){
a=0*pow(2,i);
}
sum=a+c;
c=sum;
}
cout<<sum;
return 0;
}