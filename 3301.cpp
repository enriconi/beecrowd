#include <iostream>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  if ((a > b) && (a < c) || (a > c) && (a < b)) cout << "huguinho" << endl;
  else if ((b > a) && (b < c) || (b > c) && (b < a)) cout << "zezinho" << endl;
  else cout << "luisinho" << endl;
  
  return 0;
}