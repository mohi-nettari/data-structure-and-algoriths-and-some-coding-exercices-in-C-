ki#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    string passworde;
    string confirmpassworde;
    string firstname;
    string familyname;

    cout<<"hello in mn\n";
    cout<<"enter ur first name=";
    cin>>firstname;
    cout<<"enter ur family name=";
    cin>>familyname;
    cout<<"enter ur user name=";
    cin>>username;
    cout<<"enter ur passworde=";
    cin>>passworde;
    cout<<"\n confirm ur passworde=";
    cin>>confirmpassworde;
    if (passworde!=confirmpassworde){
       cout<<"reconfirm ur password";
    }
else {

    cout<<"u qot a new mn account ";
}



    return 0;
}
