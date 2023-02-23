#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, m;
  string s;

  cin >> n >> m;

  string arr[n + 1];

  for (int i = 0; i < n; i++) cin >> arr[i];
  sort(arr, arr + n);
  cout << arr[m - 1] << endl;
  
  return 0;
}