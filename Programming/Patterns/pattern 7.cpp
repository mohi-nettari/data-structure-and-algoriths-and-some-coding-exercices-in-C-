#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{ 
int n=1,k=9;
for(int a=1;a<=5;a++)
{
for(int b=n;b<=k;b=b+2)
{
cout<<b;
}
cout <<endl;
n+=10;
k+=10;
}

return 0;
}