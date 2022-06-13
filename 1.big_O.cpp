#include <iostream>
using namespace std;

void getBigO(int n[], int m[], size_t siz)

// over all
// n + m + n ^ 2 . m = n ^ 2 . m
// This function has the time complexity of O(n ^ 2 . m)

// O(n + m)
{
  for (int i = 0; i < siz; i++)
  {
    cout << n[i] << "\t";
  }
  cout << endl;
  for (int i = 0; i < siz; i++)
  {
    cout << m[i] << "\t";
  }
  cout << endl;
  for (int i = 0; i < siz; i++)
  {
    for (int j = 0; j < siz; j++)
    {
      for (int i = 0; i < siz; i++)
      {
        cout << n[i] << "\t" << n[j] << "\t" << m[i];
        cout << endl;
      }
    }
  }
}

int main()
{

  int num1[] = {1, 2};
  int num2[] = {6, 9};

  size_t siz = sizeof(num1) / sizeof(num1[0]);

  getBigO(num1, num2, siz);
  return 0;
}
