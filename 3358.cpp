#include <iostream>
#include <cstring>

using namespace std;

bool isConsonant(char c) {
 switch(c) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': 
    case '\0': return false;
    default: return true;
  }
}

int main()
{
  char a[43];
  int n;
  bool isNotEasy = false;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;

    for (int j = 0; j < strlen(a); j++) {
      if (isConsonant(tolower(a[j])) && isConsonant(tolower(a[j + 1])) && isConsonant(tolower(a[j + 2]))) isNotEasy = true;
    }

    if (isNotEasy) cout << a << " nao eh facil" << endl;
    else cout << a << " eh facil" << endl;

    isNotEasy = false;
  }
  
  return 0;
}