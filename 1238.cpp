#include <iostream>

using namespace std;

int main()
{
  int n;
  string a, b;

  cin >> n;

  for (int i = 0; i < n; i++) {
    bool bA = true, bB = true;
    cin >> a >> b;

    int size = a.size() >= b.size() ? a.size() : b.size();
    
    for (int i = 0; i < size; i++) {
      if (a[i] == '\0') bA = false;
      if (b[i] == '\0') bB = false;

      if (bA) cout << a[i];
      if (bB) cout << b[i];
    }
    cout << endl;
  }

  return 0;
}