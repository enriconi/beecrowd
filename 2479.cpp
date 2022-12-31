#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  char c;
  string s;
  vector<string> vNP;
  vector<string> vNN;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> c >> s;

    if (c == '+') vNP.push_back(s);
    else vNN.push_back(s);
  }

  int sizeVNP = vNP.size();
  int sizeVNN = vNN.size();

  vNP.insert(vNP.end(), vNN.begin(), vNN.end());
  sort(vNP.begin(), vNP.end());

  for (int i = 0; i < vNP.size(); i++) cout << vNP[i] << endl;
  cout << "Se comportaram: " << sizeVNP << " | Nao se comportaram: " << sizeVNN << endl;

  return 0;
}