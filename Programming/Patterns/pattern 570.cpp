#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 

int main()
{

for (int i=0;i<5;i++){

for (int j=0;j<5;j++){

if (j==0||j==4){

cout<<"*";
}

else if (i==1&&j==1||i==1&&j==3)
{
cout<<"*";
}

else if (i==2&&j==2){
cout<<"*";
}


else {
cout<<" ";
}




}
cout<<endl;
}







return 0;
} 