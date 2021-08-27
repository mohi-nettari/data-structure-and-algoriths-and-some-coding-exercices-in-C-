#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 
int main()
{
int data[3][2][3]={{ {1,2,3},{4,5,6} },{ {7,8,9},{10,11,12} },{ {13,14,15},{16,17,18}}};

for (int a=0;a<3;a++){
for(int b=0;b<2;b++){
for (int c=0;c<3;c++){
 
cout<<data[a][b][c];
}
cout<<endl;
}
cout<<endl;
}

return 0;
} 