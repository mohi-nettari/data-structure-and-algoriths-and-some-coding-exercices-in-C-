#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
for(int a=1 ; a<=5 ; a++)
{
for(int b=1; b<=(5*a) ;b++)
{
cout<<b;
}
cout<<endl;
}
return 0;
}