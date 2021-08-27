#include<iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
int i,j;
for(i=0;i<=5;i++){
for (j=0;j<i;j++){
if (j<=1){
cout<<j;
}
else {
cout<<j-1;
}

}
cout<<endl;
}
return 0;
}