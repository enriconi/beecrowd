#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  int n;

  cin >> n;
  
  cin.ignore();
  
  for (int i = 0; i < n; i++) {
    
    string s;

    getline(cin, s);

    istringstream iss(s);

    while (iss >> s) {
      if (s[0] == ' ') {
        cout << " ";
        continue;
      }

      cout << s[0];
    }

    cout << endl;
  }
  
  return 0;
}