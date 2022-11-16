#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n, m;
  char a[51];

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    cin >> m;

    for (int j = 0; j < strlen(a); j++) {
      if ((a[j] - m) < 65) a[j] = a[j] - m + 26;
      else a[j] = a[j] - m;
    }
    
    cout << a << endl;
  }
  
  return 0;
}