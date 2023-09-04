#include <bits/stdc++.h>

using namespace std;

#define MAXN 100010
#define endl '\n'

int n, value;
int arr[MAXN];

int search(int value) {
  int l = 0;
  int r = n - 1;
  int index = -1;
  
  while (l <= r) {
    if (arr[l] + arr[r] == value) {
      cout << arr[l] << ' ' << arr[r] << endl;
      return 0;
    } else if (arr[l] + arr[r] < value) {
      l++;
    } else {
      r--;
    }
  }
  
  return -1;
}

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];
  cin >> value;

  search(value);
  
  return 0;
}