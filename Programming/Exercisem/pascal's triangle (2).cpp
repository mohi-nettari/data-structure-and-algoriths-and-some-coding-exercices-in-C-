#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
int i,j;
int n;
int px=0;
int sx=0;
int six=6;
cout <<"enter the raw number : ";
cin>>n;
for(i=1;i<=n;i++){
for(j=0;j<=(n*2);j++){
if (j==((n*2)/2)+px||j==((n*2)/2)-px){
cout<<'1';
}
else if (i>2&&j==((n*2)/2)+sx||j==((n*2)/2)-sx&&i>2){
cout<<px;
}
else if (i>4&&j==((n*2)/2)){
cout<<six++;
}
else {
cout<<" ";
}


}

px++;
if (i>2){
sx++;
}
cout<<endl;
}


return 0;
}