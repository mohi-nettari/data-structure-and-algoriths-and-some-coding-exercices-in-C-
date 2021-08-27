#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
int n=7;
int px=1;

 for (int i=1;i<=n;i++){
 for (int j=1;j<=n;j++){
if (j<=px||j>=n-px+1){
cout<<"*";
}
else {
cout<<" ";
}
}
if (i<4){
px++;
}
else {
px--;
}


cout<<endl;
}

/*
for(int u=7;u>=1;u--){
for(int y=8;y>=1;y--){
if (y>=u&&u>=4){
cout<<"*";
}
}
cout<<endl;
}*/
return 0;
}