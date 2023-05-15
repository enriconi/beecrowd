#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
  vector<vector <string>> v;
  priority_queue <pair<int, string>> pq;
  string nJ;
  int pJ, qtdJ, qtdT;

  cin >> qtdJ >> qtdT;

  for (int i = 0; i < qtdT; i++) v.push_back(vector <string>());

  for (int i = 0; i < qtdJ; i++) {
    cin >> nJ >> pJ;
    pq.push(make_pair(pJ, nJ));
  }

  int t = 0;
  
  while (pq.size() > 0) {
    v[t].push_back(pq.top().second);
    pq.pop();
    t = (t + 1) % qtdT;
  }

  for (int i = 0; i < qtdT; i++) {
    sort(v[i].begin(), v[i].end());
    cout << "Time " << (i + 1) << endl;
    for (string jogador : v[i]) cout << jogador << endl;
    cout << endl;
  }

  return 0;
}