#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 

/*void convertToBinary(unsigned int n)
{
cout<<"t: "<<n<<endl;
    if (n / 2 != 0) {
        convertToBinary(n/2);
    }
    
    printf("%d", n % 2);
    cout<<endl;
    
    cout<<"tt: "<<n<<"\n\n\n\n";
}
*/

/*
1 = wink
10 = double blink
100 = close your eyes
1000 = jump
10000 = Reverse the order of the operations in the 

*/
int main()
{

int arr[7];
string  ar[5]={"wink","double blink","cloose your eyes","jump"};
int n,a=0,m;
cin>>n;
m=n;
while (n>0){
arr[a]=n%2;
//cout<<arr[a]<<endl;
n=n/2;
a++;

}
int t=m&16;
if (t!=16){
for (int i=0;i<a;i++){

//cout<<arr[i];
if (arr[i]==1){    

cout<<"|"<<ar[i]<< "|\n";
}

}
}
else {

for (int i=a-1;i>=0;i--){

//cout<<arr[i];
if (arr[i]==1){    

cout<<"|"<<ar[i]<< "|\n";
}

}



}
return 0;
} 