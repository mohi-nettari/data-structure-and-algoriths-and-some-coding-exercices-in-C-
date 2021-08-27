#include<iostream>
//#include<iostream.h>
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
char a=65;
char b;
int c=0;
for (i=5;i>=1;i--){
for (j=1;j<=i*2;j++){

b=a+c;
cout<<b;

if (j<(i*2/2)){
c++;
}
else if (j>(i*2/2)&&j<i*2){
c--;
}


}

cout<<endl;
}
    
return 0;
}