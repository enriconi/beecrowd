#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n;
  cin >> n;
  int arr[n + 5];
  memset(arr, 0, sizeof(arr));

  for (int i = 1; i <= n; i++) cin >> arr[i];
  for (int i = 1; i <= n; i++) cout << (arr[i - 1] + arr[i] + arr[i + 1]) << endl;
  
  return 0;
}