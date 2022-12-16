#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n;

  while (cin >> n) {
    int num, aux = 0;
    char c;
    int shoes[61];
    memset(shoes, 0, sizeof(shoes));
    
    for (int i = 0; i < n; i++) {    
      cin >> num >> c;
  
      if (c == 'D') {
        if (shoes[num] < 0) aux++;
        shoes[num]++;
      } else {
        if (shoes[num] > 0) aux++;
        shoes[num]--;
      }
    }

    cout << aux << endl;
  }

  return 0;
}