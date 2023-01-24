#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a, b;

  cin >> a >> b;

  a = (b - a);

  cout << ceil(b / a) << endl;

  return 0;
}