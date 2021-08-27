#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
int n=5;
int i,j,t,g;
int m=0;
int y=0;

for(i=1;i<=n;i++){

for (t=n-1;t>=i;t--){
cout<<" ";
}

for (g=0; g<=m; g++){


 cout<<char (65+y);

 if (g<m/2){
 y++;
 }

 else if (g>=m/2&&g<m){
 y--;
 }


 }
//y++;
m+=2;
cout<<endl;
}


return 0;
}