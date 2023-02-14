#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0) {
    char l;
    int aux;
    string answer;
    int correct[26], incorrect[26];

    memset(correct, 0, sizeof(correct));
    memset(incorrect, 0, sizeof(incorrect));
    
    for (int i = 0; i < n; i++) {   
      cin >> l >> aux >> answer;
      bool isZero = correct[(int) l - 65] == 0;
      
      if (answer[0] == 'c' && isZero) correct[(int) l - 65] = aux;
      if (answer[0] == 'i' && isZero) incorrect[(int) l - 65] += 20;
    }

    int sum = 0, appearances = 0;

    for (int i = 0; i < 26; i++) {
      if (correct[i] != 0) {
        appearances++;
        sum += (correct[i] + incorrect[i]);
      }
    }

    cout << appearances << " " << sum << endl;
  }

  return 0;
}