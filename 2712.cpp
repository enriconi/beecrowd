#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    
    cin >> s;

    char c = s[7];
    
    if (!(isupper(s[0]) && isupper(s[1]) && isupper(s[2]) && s[3] == '-' &&
        isdigit(s[4]) && isdigit(s[5]) && isdigit(s[6]) && isdigit(s[7]) && s.size() == 8)) {
      cout << "FAILURE" << endl;
    } else {
      if (c == '1' || c == '2') cout << "MONDAY" << endl;
      else if (c == '3' || c == '4') cout << "TUESDAY" << endl;
      else if (c == '5' || c == '6') cout << "WEDNESDAY" << endl;
      else if (c == '7' || c == '8') cout << "THURSDAY" << endl;
      else cout << "FRIDAY" << endl;
    }
  }
  
  return 0;
}