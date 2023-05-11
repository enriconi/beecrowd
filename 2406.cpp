#include <iostream>
#include <stack>

using namespace std;

int main()
{
  int n;
  string e;

  cin >> n;

  for (int i = 0; i < n; i++) {
    stack<char> s;
    bool rightChar = false;
    
    cin >> e;
    
    for (char c : e) {
      if (c == '{' || c == '[' || c == '(') {
        s.push(c);
      } else {
        if (s.size() > 0 && c == '}' && s.top() == '{') {
          s.pop();
        } else if (s.size() > 0 && c == ']' && s.top() == '[') {
          s.pop();
        } else if (s.size() > 0 && c == ')' && s.top() == '(') {
          s.pop();
        } else {
          rightChar = true;
          break;
        }
      }
    }
    if (s.size() > 0) rightChar = true;
    cout << (rightChar ? 'N' : 'S') << endl;
  }
  
  return 0;
}