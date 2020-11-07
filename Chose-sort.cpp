#include "pch.h"
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <iostream> / Khasanov A

using namespace std;
int main() {
  setlocale(LC_ALL, "rus");
  int a[500], i, j, min, n, amin;
  cout << "Введите размер массива до 500: ";
  cin >> n;
  cout << "Введите элементы массива: ";
  for (i = 0; i < n; i++) {
    cin>> a[i];
  }
  for (i = 0; i < n - 1; i++) {
    min = i;
    for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
        min = j;
    amin = a[i];
    a[i] = a[min];
    a[min] = amin;
  }
  cout << "Отсортированный массив: ";
  for (i = 0; i < n; i++)
    cout <<  a[i]<< "; ";
  cout << endl << endl<< endl<< endl;
  return 0;}
