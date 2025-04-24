#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

void swap(int *a, int *b)
{
  const int temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int a = 5;
  int b = 6;
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  swap(&a, &b);
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  return 0;
}
