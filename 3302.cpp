#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    int cA;
    cin >> cA;
    cout << "resposta " << i << ": " << cA << endl;
  }
  
  return 0;
}