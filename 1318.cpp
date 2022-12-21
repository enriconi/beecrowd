#include <iostream>

using namespace std;

int main()
{
  int n, m;
  int arr[10001];

  while (cin >> n >> m && (n != 0 && m != 0)) {
    int aux, sum = 0;
    
    for (int i = 1; i <= n; i++) {
      arr[i] = 0;
    }

    for (int j = 0; j < m; j++) {
      cin >> aux;

      arr[aux]++;
      if (arr[aux] == 2) sum++;
    }

    cout << sum << endl;
  }
  
  return 0;
}