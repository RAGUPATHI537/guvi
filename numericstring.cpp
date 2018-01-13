#include <iostream>
using namespace std;
 
 bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}
 
 int main()
{ char str[50];
    scanf("%s",str);
  
     if (isNumber(str))
        cout << "yes";
 
     
    else
        cout << "no";
}
