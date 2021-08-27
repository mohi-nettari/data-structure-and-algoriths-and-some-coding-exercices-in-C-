#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int n=1,k=5;
for(int a=1;a<=5;a++)
{
for (int b=n;b<=k;b++)
{
cout<<b<<"..";
}
cout<<endl;
}
n+=5;
k+=5;
return 0;
}