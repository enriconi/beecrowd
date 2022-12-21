#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string s;
  int n;
  vector<string> v;
  int aux;

  cin >> n;

  while (n != 0) {
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
      cin >> s;
      
      v.push_back(s);
      
      if (s.size() > aux) aux = s.size();
    }
    
    for (int i = 0; i < v.size(); i++) {
      for (int j = 0; j < (aux - v[i].size()); j++) {
        cout << " ";
      }
      cout << v[i] << endl;
    }

    cin >> n;

    if (n != 0) cout << endl;
  
    aux = 0;
    v.clear();
  }

  
  return 0;
}