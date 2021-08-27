#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 


int main()
{
int c=0,g=1,x=1,y=1;

for (int i=4;i>=0;i--){

for (int j=0;j<i;j++){
cout<<" ";
}

for ( int k=c ; k>= -c ; k--){

cout << g ;

if (k>0){

g+=x;

x*=2;

}



else {
y=g/2;
g-=y;
//y/=2;
}



}

c++;

x=1;

g=1;

y=1;

cout << endl;

}

return 0;
} 