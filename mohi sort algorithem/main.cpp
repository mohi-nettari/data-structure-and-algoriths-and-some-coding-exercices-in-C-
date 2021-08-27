#include <iostream>

using namespace std;

int main()
{
   int a[6]={5,8,4,6,2,7};
   int r;
   int k=5;
   for(int i=0; i<5 ; i++){
    for (int j=0;j<k;j++){
       if (a[i]>a[i+1]){
       a[i] =r;
       a[i]=a[i+1];
       a[i+1]=r;

       }
    }

    k--;

   }
cout<<a[0]<<endl;

    return 0;
}
