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
string a="mohi nettari and nedjmou nettari are twins";
map<char,int>mp;
cout<<a<<"\n\n";
for (int i=0;i<a.size();i++){
char letter=a[i];
if (mp.find(letter)==mp.end()){
mp[letter]=0;

}
mp[letter]++;

}

for (map<char,int>:: iterator itr=mp.begin(); itr!=mp.end();++itr){

cout<<itr->first<<" : "<<itr->second<<endl;

}



    return 0;

}