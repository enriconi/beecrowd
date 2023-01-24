#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n[4];

  for (int i = 0; i < 4; i++) cin >> n[i];
  sort(n, n + 4);

  if (n[0] + n[1] > n[2]) cout << "S" << endl;
  else if (n[0] + n[1] > n[3]) cout << "S" << endl;
  else if (n[1] + n[2] > n[3]) cout << "S" << endl;
  else if (n[0] + n[2] > n[3]) cout << "S" << endl;
  else cout << "N" << endl;
  
  return 0;
}