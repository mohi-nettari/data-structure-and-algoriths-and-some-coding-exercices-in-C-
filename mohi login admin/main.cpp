#include <iostream>
#include<string>

using namespace std;

int main()
{
    string username;
    string passworde;
    int a=0;

    cout<<"\t \t \t welcom admine \n\n";
    do{

        cout<<"eneter ur user name=";
        cin>>username;
        cout<<"enter ur passworde=";
        cin>>passworde;

        if(username=="mohi" && passworde=="mohinettari"){

            cout<<"ur login seccess";
            a=1;
        }
        else{
         cout<<"the username or passwrde u entered is wrong\n";

        }
    }while (a!=1);




    return 0;
}
