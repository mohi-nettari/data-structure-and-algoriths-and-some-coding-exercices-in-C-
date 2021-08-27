#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
int i,j;
int n=7;
int x=n/2;
int px=1;
for(i=1;i<=n;i++){
for (j=1;j<=7;j++){
if (j==x+1||j==x+px+1){
cout<<".";
}
else{
cout<<"#";
}

}
if (i<=3){
x--;
}
else {
x++;
}
cout<<endl;
}
return 0;
}