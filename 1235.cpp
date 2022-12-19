#include <iostream>

using namespace std;

int main()
{
  int n;
  string s;

  cin >> n;

  cin.ignore();

  for (int i = 0; i < n; i++) {
    getline(cin, s);

    int size = s.size();
  
    for (int i = (size / 2) - 1; i >= 0; i--) {
      cout << s[i];
    }

    for (int j = (size - 1); j >= (size / 2); j--) {
      cout << s[j];
    }

    cout << endl;
  }

  return 0;
}