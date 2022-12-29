#include <iostream>
#include <map>

using namespace std;

int main()
{
  int m, n;
  
  while (cin >> m >> n && (m != 0 && n != 0)) {
    map<int, int> frequency;
    int aux = 0;
    int arr[m];
    
    for (int i = 0; i < m; i++) cin >> arr[i];
    for (int j = 0; j < m; j++) frequency[arr[j]]++;
    for (auto number : frequency) if (number.second >= n) aux++;

    cout << aux << endl;
  }

  return 0;
}