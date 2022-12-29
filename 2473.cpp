#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;
  int n[7];
  int aux = 0, a;

  for (int i = 0; i < 6; i++) cin >> n[i];
  for (int i = 0; i < 6; i++) {
    cin >> a;
    v.push_back(a);
  }
  
  for (int i = 0; i < 6; i++) {
    if ((count(v.begin(), v.end(), n[i]))) aux++;
  }

  if (aux == 3) cout << "terno" << endl;
  else if (aux == 4) cout << "quadra" << endl;
  else if (aux == 5) cout << "quina" << endl;
  else if (aux == 6) cout << "sena" << endl;
  else cout << "azar" << endl;
  

  return 0;
}