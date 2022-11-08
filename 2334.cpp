#include <iostream>

using namespace std;

int main()
{
  unsigned long long n;

  while (cin >> n && n != -1) {
    if (n == 0) cout << "0" << endl;
    else cout << (n - 1) << endl;
  }
  
  return 0;
}