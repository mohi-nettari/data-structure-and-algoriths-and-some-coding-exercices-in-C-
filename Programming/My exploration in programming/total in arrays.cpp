#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int b[5]={4,5,6,7,8};
int total=0;
for(int a=0 ;a<5 ;a++){
total=b[a]+total;
cout<<total<<endl;

}

return 0;
}