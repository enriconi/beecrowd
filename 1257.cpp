#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, aux = 0;

    cin >> a;

    for (int j = 0; j < a; j++) {
      string s;
      cin >> s;
      for (int k = 0; k < s.size(); k++) aux += (s[k] - 'A') + j + k; 
    }
    
    cout << aux << endl;
  }

  return 0;
}