#include <iostream>

using namespace std;

int main()
{
  int aux = 1, sum = 0;
  string s;

  while (aux <= 3) {
    getline(cin, s);
    
    if (s == "--*") sum += 1;
    else if (s == "-*-") sum += 2;
    else if (s == "-**") sum += 3;
    else if (s == "*--") sum += 4;
    else if (s == "*-*") sum += 5;
    else if (s == "**-") sum += 6;
    else if (s == "***") sum += 7;
    
    if (s[0] == 'c') {
      aux++;
      cout << sum << endl;
      sum = 0;
    }
  }

  return 0;
}