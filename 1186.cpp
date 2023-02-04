#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double m[12][12], sum = 0.0;
  char c;

  cin >> c;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> m[i][j];
      if ((11 - i) < j) sum += m[i][j];
    }
  }

  cout << fixed << setprecision(1);
  cout << (c == 'S' ? sum : sum / 66.0) << endl;
  
  return 0;
}