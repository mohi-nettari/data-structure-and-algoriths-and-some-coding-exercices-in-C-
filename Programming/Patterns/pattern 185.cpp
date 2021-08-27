#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
//#include<functional>
//#include<vector>
//#include<map>

using namespace std;

int main()
{
int i,j;
char a=68;
int d=0;
int n=7;
int c=2;
int t=3;
for(i=1;i<=7;i++){
for(j=1;j<=7;j++){

if ((j%2)!=0 && j>=n-d){
cout<<a;
a++;
}

else {
cout<<" ";
}

}

cout<<endl;


if (i<4){
d+=2;
a-=c;
c++;
}

else {
d-=2;
a-=t;
t--;
}

}

return 0;
}