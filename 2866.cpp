#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n;
  string a, b;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;

    for (int j = 0; j < a.length(); j++) {
      if (islower(a[j])) b.push_back(a[j]);
    }

    for (int k = b.length() - 1; k >= 0; k--) {
      cout << b[k];
    }

    cout << endl;
    
    b.clear();
  }
    
  return 0;
}