#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
#include<ctime>
#include<cstdlib>
using namespace std; 
struct cars {
int matrecil;
string color;
string gaz;
bool turbo;
};
int main(){

cars stud;

stud.matrecil=1001;
stud.color="black";
stud.gaz="super";
stud.turbo=true;

cout<<stud.matrecil;

return 0;
}