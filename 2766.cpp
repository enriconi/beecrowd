#include <iostream>

using namespace std;

int main()
{
  string n[11];

  for (int i = 0; i < 10; i++) {
    cin >> n[i];
  }

  cout << n[2] << endl;
  cout << n[6] << endl;
  cout << n[8] << endl;
  
  return 0;
}