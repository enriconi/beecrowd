#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
  int n, a, b;

  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    
    cin >> a >> b;
  
    for (int j = a; j <= b; j++) {
      ostringstream oss;
      oss << j;
      s += oss.str();
    }
    
    cout << s;

    for (int j = s.size() - 1; j >= 0; j--) cout << s[j];
    
    cout << endl;
  }
  
  return 0;
}