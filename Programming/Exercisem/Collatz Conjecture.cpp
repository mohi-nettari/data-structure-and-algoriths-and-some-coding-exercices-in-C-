#include<iostream>
//#include<iostream.h>
#include<string>
#include<stdio.h>
#include<math.h>
//#include<functional>
//#include<vector>
#include<map>

using namespace std;
int main()
{

    int num,a=0;
    cout<<"enter a number: ";
    cin>>num;

    if (num>0) {

        while(num>1) {

            if (num%2==0) {
                num=num/2;
            }
            else if (num%2!=0) {
                num=3*num+1;
            }

            a++;

        }

        cout<<a;





    }
    else {
    cout<<"eror";
    }





    return 0;

}