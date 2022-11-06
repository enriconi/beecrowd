#include <iostream>

using namespace std;

int main()
{
  int n, days = 0;
  float kg;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> kg;

    while (kg > 1) {
      days++;
      kg /= 2.0;
    }

    cout << days << " dias" << endl;

    days = 0;
  }
  
  return 0;
}