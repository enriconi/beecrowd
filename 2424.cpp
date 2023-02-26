#include <iostream>

using namespace std;

int main()
{
  int n, m;

  cin >> n >> m;

  cout << (((n >= 0 && n <= 432) && (m >= 0 && m <= 468)) ? "dentro" : "fora") << endl;
  
  return 0;
}