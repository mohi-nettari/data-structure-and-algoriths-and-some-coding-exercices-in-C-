#include <iostream>

using namespace std;

int main()
{
  cout << "what do you prefer from this leags = \n";
  cout << "1-la liga \n"<< "2-bondsliga \n" << "3-premiere ligue" << endl;
  int leag;
  cin >> leag;

   switch  (leag) {
   case 1:
   cout << "from this leag,wish team do you like =\n";
   cout << "1-barca \n" << "2-real \n" << "3-khitafi \n";
   int team1;
   cin >> team1;
   switch (team1) {
   case 1:
   cout << "you prefer laliga and you like barca \n";
   break;
   case 2:
     cout << "you prefer laliga and you like real \n";
     break;
   case 3:
    cout << "you prefer laliga and you like khitafi";
   break;
   }
break;
   default :
    cout << "error";
    break;




  }
    return 0;
}
