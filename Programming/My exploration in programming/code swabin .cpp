#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int badnjavel;
printf("badn javel=");
scanf("%d",&badnjavel);
printf("badn javel:%d",badnjavel*10);
int badnisis;
printf("\n badn isis:");
scanf("%d",&badnisis);

int badnlechat;
printf("\n badn le chat:");
scanf("%d",&badnlechat);

int badnhajra;
printf("\n badn hajra:");
scanf("%d",&badnhajra);

int total=(badnisis+badnlechat+badnhajra)*27;
printf("\n total te3 swabin:%d",total);
printf("\n total kolch:%d",total+(badnjavel*10));


return 0;
}