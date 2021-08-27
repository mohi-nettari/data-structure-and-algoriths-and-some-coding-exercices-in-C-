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

    int num [50];
    int mum[50];
    int i=0,n,m,a=0,p,l,o,y,c=0;
    cout<<"thu number must consist of 1 to 9\n";
    cout<<"enter your card num: ";

    do {

        cin>>num[i];
//cout<<num[i];
        i++;
    } while (i<4);

    for (int j=0; j<i; j++) {

        while(num[j]>0) {
            n=num[j]%10;

            num[j]=num[j]/10;


            if (num[j]>=100&&num[j]<=999||num[j]>=1&&num[j]<=9)   {
              mum[a]=n;  
            }

            else   {
                
            m=n*2;
                if (m>9) {
                    m-=9;
                }
                mum[a] = m;


            }
            a++;
            // cout<<endl;
        }
        cout<<" " ;

    }


    for (int t=3; t>=0; t--) {

        cout<<mum[t];
        p=mum[t]+c;
        c=p;
    }
    c=0;
    cout<<" ";
    for (int t=7; t>=4; t--) {

        cout<<mum[t];
        l=mum[t]+c;
        c=l;

    }
    cout<<" ";
    c=0;
    for (int t=11; t>=8; t--) {

        cout<<mum[t];
        o=mum[t]+c;
        c=o;

    }
    cout<<" ";
    c=0;

    for (int t=15; t>=12; t--) {

        cout<<mum[t];
        y=mum[t]+c;
        c=y;

    }

    if((y+o+p+l)%10==0) {
        cout<<"\nthe number is valid!!";

    }
    else {
        cout<<"\nthe number is not valid!!";

    }





    /*
    string num;
    cout<<"enter your credit card number: ";
    cin>>num;
    */









    return 0;

}