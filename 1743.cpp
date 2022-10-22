#include <iostream>

using namespace std;

int main()
{
  int a[6], b[6], k = 0;
  bool compativel = true;

  for (int i = 0; i < 5; i++) cin >> a[i];
  for (int j = 0; j < 5; j++) cin >> b[j];

  while (k < 5) {
    if (a[k] == b[k]) compativel = false;
    k++;
  }

  if (compativel) cout << "Y" << endl;
  else cout << "N" << endl;

  return 0;
}