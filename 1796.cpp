#include <iostream>

using namespace std;

int main()
{
  int n, a, sim = 0, nao = 0;

  cin >> a;

  for (int i = 0; i < a; i++) {
    cin >> n;

    if (n != 1) sim++;
    else nao++;
  }

  if (nao >= sim) cout << "N" << endl;
  else cout << "Y" << endl;
  
  return 0;
}