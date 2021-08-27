#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
int i,j;
int n=5;
int px=0;
int fx=0;
int sx=0;
for(i=1;i<=5;i++){
for(j=0;j<=9;j++){
if (j==n+px||j==n-px){
cout<<"1";
}
else if (i>2&&j==5+sx||j==5-sx&&i>2){
cout<<px;
}
else if (i==5&&j==5){
cout<<"6";
}

else {
cout<<" ";
}


}

px++;
if (i>2){
sx++;
}
cout<<endl;
}


return 0;
}