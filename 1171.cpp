#include <iostream>
#include <map>

using namespace std;

int main()
{
  int n;
  map<int, int> frequencia;
  
  cin >> n;

  int arr[n];
  
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int j = 0; j < n; j++) {
    frequencia[arr[j]]++;
  }

  for (auto numero : frequencia) {
    cout << numero.first << " aparece " << numero.second << " vez(es)" << endl;
  }

  return 0;
}