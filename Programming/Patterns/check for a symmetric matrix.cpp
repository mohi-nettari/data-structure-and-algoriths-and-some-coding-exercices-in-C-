#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
int a[3][3];
int x=0;
cout<<"enter a matrix"<<endl;
/*cin>>a[0][0];
cin>>a[0][1];
cin>>a[0][2];
cin>>a[1][0];
cin>>a[1][1];
cin>>a[1][2];
cin>>a[2][0];
cin>>a[2][1];
cin>>a[2][2];*/
for (int i=0;i<=2;i++){
for (int j=0;j<=2;j++){

cin>>a[i][j];

}
cout<<endl;
}

for (int i=0;i<=2;i++){
for (int j=0;j<=2;j++){

cout<<a[i][j];

}
cout<<endl;
}
cout << "\n\n";
for (int i=0;i<=2;i++){
for (int j=0;j<=2;j++){

cout<<a[j][i];
if (a[j][i]==a[i][j]){
x++;
}

}
cout<<endl;
}

if (x==9){
cout<<"matrix is symmetric";
}
else {
cout<<"matrix is not symmetric";
}
return 0;
}