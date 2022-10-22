#include <iostream>

using namespace std;

int main()
{
  int n;
  char num[3];

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> num;

    num[0] -= 48;
    num[2] -= 48;

    if (num[0] == num[2]) cout << num[0] * num[2] << endl;
    else if (num[1] >= 65 && num[1] <= 90) cout << num[2] - num[0] << endl;
    else cout << num[0] + num[2] << endl;
  }

  return 0;
}