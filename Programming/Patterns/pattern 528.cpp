#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
int i,j;
int a=0;
int b=1;
int n=7;
int px=0;
for (i=1;i<=n;i++){
for(j=1;j<=n;j++){

if (j==4||j<=4+px&&j>=4-px){
cout<<".";
}

else {
cout<<"#";
}

}
if (i<4){
px++;
}
else  {
px--;
}

cout<<endl;
}

return 0;
}