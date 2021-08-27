#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{ 
int x=1 ,n=5,py=1,px=1;
for (int row=x; row<n;row++){
for (int col=x;col<n*2;col++){
if (col==n){
cout<<row;
}
else if (col<n&&col>=n-px){
cout<<"(";
}
else if (col>n&&col<=n+py) {
cout<<")";
}
else {
cout<<" ";
}
}
cout <<endl;
px+=1;
py+=1;
}
return 0;
}