#include <iostream>

using namespace std;

void tribulle(int t[], int n) {
  int i, j;
  int tmp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - 1 - i; j++) {
      if (t[j] > t[j + 1]) {
        tmp = t[j];
        t[j] = t[j + 1];
        t[j + 1] = tmp;
      }
    }
  }
}

int main() {
  int t[] = {5, 3, 2, 1, 4};
  int n = sizeof(t) / sizeof(t[0]);

  cout << "Unsorted array: ";
  for (int i = 0; i < n; i++) {
    cout << t[i] << " ";
  }
  cout << endl;

  tribulle(t, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << t[i] << " ";
  }
  cout << endl;

  return 0;
}