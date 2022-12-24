#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int arr[4], copyArr[4];

  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  copy(arr, arr + 3, copyArr);
  sort(copyArr, copyArr + 3);

  for (int i = 0; i < 3; i++) {
    cout << copyArr[i] << endl;
  }

  cout << endl;

  for (int i = 0; i < 3; i++) {
    cout << arr[i] << endl;
  }
  
  return 0;
}