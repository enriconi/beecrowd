#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
  string n, m;

  while (cin >> n >> m && (n != "0" && m != "0")) {
    unsigned long long aux = (stoi(n) + stoi(m));
    int size = trunc(log10(aux)) + 1;
    string sum = to_string(aux);

    for (int i = 0; i < size; i++) {
      if (sum[i] != '\0' && sum[i] != '0') cout << sum[i];
    }

    cout << endl;
  }

  return 0;
}