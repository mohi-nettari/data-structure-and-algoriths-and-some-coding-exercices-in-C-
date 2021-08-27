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



int a,b,c;
cout<<"enter your allergy score: ";
cin>>a;
/*eggs (1)
peanuts (2)
shellfish (4)
strawberries (8)
tomatoes (16)
chocolate (32)
pollen (64)
cats (128
*/

map<int, string>allergy;
allergy[1]="eggs";
allergy[2]="peanuts";
allergy[4]="shellfish";
allergy[8]="strawberries";
allergy[16]="tomatoes";
allergy[32]="chocolate";
allergy[64]="cats";


for (int i=0;i<=7;i++){

   b=pow(2,i);

c=a&b;

cout<<allergy [c]<<endl;

}


    return 0;

}