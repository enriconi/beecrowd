#include <iostream>

using namespace std;

int main()
{
  int a, b, c, sum;

  cin >> a >> b >> c;

  if (a == 0) a = 24;
  
  sum = (a + b + c);

  if (sum > 24) sum -= 24;
  else if (sum == 24) sum = 0;

  cout << sum << endl;
  
  return 0;
}