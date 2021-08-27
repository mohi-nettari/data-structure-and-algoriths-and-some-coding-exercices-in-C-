#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
int i,j,n=5,k=9;
int t=1,x=1;
int m=4;
for(i=0;i<n;i++){
for(j=0;j<k;j++){



if (j<=(k/2)-t){
cout<<" ";
}

else if (j>(k/2)-t && j<=(k/2)-t+x){
cout<<char (65+m);
}

if (j<(k/2)){
m--;
}


else if (j>=(k/2)){
m++;
}


}
m=4;
t++;
x+=2;
cout<<endl;
}


return 0;
}