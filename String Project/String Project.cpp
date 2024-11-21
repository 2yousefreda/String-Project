#include <iostream>
#include <vector>
#include "String.h"
using namespace std;
int main()
{
    ClsString s1 = ClsString("       yousef reda @d  fsd.df                ");
     vector <string> s2{"ew","453","w4"};
     vector <string> s3;
    cout << s1.capitalfirstL() << endl;
    cout << s1.CharCounter('y', false) << endl;
    cout << s1.CountWords()<< endl;
    cout << s1.getfirstchar()<< endl;
    cout << s1.GetValue()<< endl;
    cout << s1.invert()<< endl;
    cout << ClsString::joinstring(s2,"//") << endl;
    cout << s1.reblaceWord("yousef","nour") << endl;
    cout << s1.RemovePunct() << endl;
    cout << s1.reverse() << endl;

    cout << "-------------------\n";
    s3= s1.split(" ");
    for (string& x : s3) {
        cout << x << endl;
    }
    cout << "--------------------\n";
    cout << s1.ToUpper()<<endl;
    cout << s1.ToLower()<<endl;
    cout << s1.trim()<<endl;
    cout << s1.trimLeft()<<endl;
    cout << s1.trimreigt()<<endl;
    cout << s1.vowelcounter()<<endl;
    cout << s1.Length() << endl;
 
  
    system("pause>0");
}
