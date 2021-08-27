#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int a;
printf("enter the first number:");
scanf("%d",&a);


int b;
printf("\n enter the second number:");
scanf("%d",&b);

int sum=a+b;
int mult=a*b;
int addv=a/b;
int mins=a-b;

printf("the sum is:%d",sum);
printf("\n the mult is:%d",mult);
printf("\n the addv is:%d",addv);
printf("\n the mins is:%d",mins);
return 0;
}