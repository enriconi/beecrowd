#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    int tOH, tOV, tTH, tTV;
    char c;

    cin >> tOH >> c >> tTV;
    cin >> tTH >> c >> tOV;
    
    int gTO = (tOH + tOV);
    int gTT = (tTH + tTV);
    int gMO = (tTH + tOV);
    int gMT = (tOH + tTV);

    if (gTO > gTT) {
      cout << "Time 1" << endl;
    } else if (gTT > gTO) {
      cout << "Time 2" << endl;
    } else {
      if (gMO > gMT) cout << "Time 1" << endl;
      else if (gMT > gMO) cout << "Time 2" << endl;
      else cout << "Penaltis" << endl;
    }
  }

  return 0;
}