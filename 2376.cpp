#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<char> v[5];

	for (char i = 'A'; i <= 'P'; i++) v[0].push_back(i); 

  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= v[i - 1].size(); j += 2) {
      unsigned short g1, g2;

      cin >> g1 >> g2;

      if (g1 > g2) v[i].push_back(v[i - 1][j - 1]);
      else v[i].push_back(v[i - 1][j]);
    }
  }

  cout << v[4][0] << endl;
  
  return 0;
}