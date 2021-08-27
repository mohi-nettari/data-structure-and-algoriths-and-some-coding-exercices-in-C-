#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
int n=5,k=9;
int i,j,t,g;
int m=0;

for(i=0;i<n;i++){

for (t=n-1;t>i;t--){
cout<<" ";
}

for (g=-m; g<=m; g++){

cout<<char (65+abs(g));

}
m++;
//m+=2;
cout<<endl;
}


return 0;
}