#include <iostream>

using namespace std;

int josephus(int n, int k) {
  if (n == 1) return n;
  else return (((josephus(n - 1, k) + k - 1) % n) + 1);
}

int main()
{
  int a, n, k;

  cin >> a;

  for (int i = 1; i <= a; i++) {
    cin >> n >> k;
    cout << "Case " << i << ": " << (josephus(n, k)) << endl;
  }
  
  return 0;
}