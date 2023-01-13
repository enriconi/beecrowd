#include <iostream>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  if (a > b && c >= b) cout << ":)" << endl;
  else if (b > a && b >= c) cout << ":(" << endl;
  else if (b > a && c > b && ((b - a) > (c - b))) cout << ":(" << endl;
  else if (b > a && c > b && ((c - b) >= (b - a))) cout << ":)" << endl;
  else if (a > b && b > c && ((a - b) > (b - c))) cout << ":)" << endl;
  else if (a > b && b > c && ((b - c) >= (a - b))) cout << ":(" << endl;
  else if (a == b) {
    if (c > b) cout << ":)" << endl;
    else cout << ":(" << endl;
  }
  
  return 0;
}