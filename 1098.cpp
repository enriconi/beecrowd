#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  float i = 0, j = 1;

  while (i <= 2.1) {
    cout << "I=" << i << " J=" << (j + i) << endl;
    cout << "I=" << i << " J=" << (j + i + 1) << endl;
    cout << "I=" << i << " J=" << (j + i + 2) << endl;
    i += 0.2;
  }
  
  return 0;
}