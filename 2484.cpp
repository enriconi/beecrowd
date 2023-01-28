#include <iostream>

using namespace std;

int main()
{
  string s;
  
  while (cin >> s) {
    int aux = 0, size = s.size();
  
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < aux; j++) cout << " ";
      for (int k = 0; k < size - 1; k++) cout << s[k] << " ";
      cout << s[size - 1];
      
      size--;
      aux++;
      cout << endl;
    }
    cout << endl;
  }
  
  return 0;
}