#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    float a, b;

    cin >> a >> b;

    cout << fixed << setprecision(1);
    if (b == 0) cout << "divisao impossivel" << endl;
    else cout << (a / b) << endl;
  }
  
  return 0;
}