#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, sum = 0, aux = 0, a, j = 1;
  vector<int> v;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }

  while (n > j) {
    if (v[j] == v[j - 1]) {
      sum++;
    } else {
      if (sum > aux) {
        aux = sum;
        sum = 0;
      } else {
        sum = 0;
      }
    }
    j++;
  }

  if (sum > aux) aux = sum;
  cout << (aux + 1) << endl;

  return 0;
}