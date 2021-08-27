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
int num;
while(1)
{
cout<<"enter a number tofind square of it<=100\n";
cout<<"press 0 if u want to end the program\n";
cin>>num;
if (num==0){
cout<<"thank u";
break;
}
else if (num>100){
cout<<"thenumber u entered is greater than 100\n\n";
continue;
}
else if(num<=100) {
cout<<"the square of "<<num<<" is:"<<pow(num,2)<<endl;
continue;
}

}
return 0;
}