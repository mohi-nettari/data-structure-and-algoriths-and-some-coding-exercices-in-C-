#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a;
    int b;

    printf("enter the first number=");
    scanf("%d",a);
    printf("enter the second number=");
    scanf("%d",b);

    int sum=a+b;
    int mult=a*b;
    int addv=a/b;
    int mins=a-b;

    printf("the sum is=",sum);
    printf("the multi is",mult);
    printf("the addv is",addv);
    printf("the mins is",mins);

     return 0;
}
