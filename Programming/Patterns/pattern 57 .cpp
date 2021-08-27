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
int x;
int c=0 , a=1 ;//ac=a+c;

for(i=1;i<=5;i++){
for (j=1;j<=i;j++){

cout<<a+c<<" ";

c=c+a;

a=c-a;


}

cout<<endl;

}
return 0;
}