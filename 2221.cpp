#include <iostream>

using namespace std;

int main()
{
  int n, vGA, aA, dA, nA, vGB, aB, dB, nB, b;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> b;
    cin >> aA >> dA >> nA;
    cin >> aB >> dB >> nB;

    vGA = ((aA + dA) / 2 );
    vGB = ((aB + dB) / 2 );

    if (nA % 2 == 0) vGA += b;
    if (nB % 2 == 0) vGB += b;

    if (vGA > vGB) cout << "Dabriel" << endl;
    else if (vGB > vGA) cout << "Guarte" << endl;
    else cout << "Empate" << endl;
  }

  return 0;
}