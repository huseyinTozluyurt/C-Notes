#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

bool isPalindrome(const string &str)
{

    int len=str.length()-1;
    for(int i=0;len>i;i++){
      
    if(tolower(str[i])==tolower(str[len])){
        len--;
    }   
    else
    {
        return false;
    }  
 
  }
 return true;
}


bool xxx(const string &);

int main() {
  vector<string> phrases;
  phrases.push_back("reDivider");
  phrases.push_back("deified");
  phrases.push_back("civic");
  phrases.push_back("radaR");
  phrases.push_back("level");
  phrases.push_back("rotor");
  phrases.push_back("kayak");
  phrases.push_back("reviver");
  phrases.push_back("racecar");
  phrases.push_back("madam"); 
  phrases.push_back("reFer"); 
  phrases.push_back("whatever"); 
  phrases.push_back("not"); 
  phrases.push_back("Mirrored"); 
  phrases.push_back("astora"); 
  phrases.push_back("lordran"); 
  phrases.push_back("lothric"); 
  phrases.push_back("abyss"); 
  for (auto x : phrases)
  {
    if (xxx(x) == isPalindrome(x)) 
      cout << "ok" << endl;
    else
      cout << "error" << endl;
  }
  return 0;
}

bool xxx(const string &str)
{
  stack<char> s;
  for(char c:str)
  {
    c = tolower(c);
    s.push(c);
  }
  for(char c:str)
  {
    c = tolower(c);
    if(c!=s.top())
      return false;
    s.pop();
  }
  return true;
}
