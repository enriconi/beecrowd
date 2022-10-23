#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main()
{
  float a, b, c, d;

  cin >> a >> b;
  cin >> c >> d;
  
  cout << fixed << setprecision(4);
  cout << sqrt(((c - a) * (c - a)) + ((d - b) * (d - b))) << endl;
  
  return 0;
}