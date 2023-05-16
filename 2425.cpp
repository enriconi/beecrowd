#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int main()
{
  priority_queue <pair<int, int>> pq;
  int c, n, t, d, ans = 0, aux;

  cin >> c >> n;

  for (int i = 0; i < n; i++) {
    cin >> t >> d;
    aux += d;
    pq.push(make_pair(t, d));
  }


  while (pq.size() > 0) {
    aux -= pq.top().second;
    if ((aux - pq.top().first) > 20) ans++; 
    pq.pop();
  }

  cout << ans << endl;

  return 0;
}