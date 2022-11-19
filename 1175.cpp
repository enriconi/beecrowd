#include <iostream>

using namespace std;

int main()
{
  int n[21];

  for (int i = 0; i < 20; i++) {
    cin >> n[i];
    n[i] = n[i];
  }

  for (int j = 19, k = 0; j >= 0; j--, k++) {
    cout << "N[" << k << "] = " << n[j] << endl;
  }
  
  return 0;
}