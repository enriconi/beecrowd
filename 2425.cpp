#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
  priority_queue<int, vector<int>, greater<int>> pq;
  int c, n, t, d, ans = 0;

  cin >> c >> n;

  for (int i = 0; i < c; i++) {
    cin >> t >> d;
    pq.push(t + d);
  }

  for (int i = c; i < n; i++) {
    cin >> t >> d;
    
    int aux = pq.top();
    pq.pop();
    
    if ((aux - t) > 20) ans++;
    pq.push(max(aux, t) + d);
  }

  cout << ans << endl; 

  return 0;
}