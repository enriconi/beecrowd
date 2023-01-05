#include <iostream>

using namespace std;

int main()
{
  string s1, s2;

  while (getline(cin, s1)) {
    int aux = 0;
    
    getline(cin, s2);

    for (int i = 0; i < s1.size(); i++) {
      for (int j = 0; j < s2.size(); j++) {
        if (s1[i] == s2[j]) {
          int count = 0;
          for (int k = 0; (k + i) < s1.size(), (k + j) < s2.size(); k++) {
            if (s1[k + i] != s2[k + j]) break;
            count++;
          }
          if (count > aux) aux = count;
        }
      }
    }
    
    cout << aux << endl;
  }
  
  return 0;
}