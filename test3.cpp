#include "helpers.h"

int *f(int i)
{
  int j = 5;

  j += i;
  return &j; // YIKES!! It hurts me to type this...
}

int main()
{
  int *pi1 = NULL;
  int *pi2 = NULL;

  pi1 = f(6);
  print_info(pi1);
  cout << "pi1 address " << pi1 << " with data " << *pi1 << endl;
  pi2 = f(5);
  print_info(pi2);
  cout << "pi2 holds " << pi2 << " with data " << *pi2 << endl;
  cout << "pi1 holds " << pi1 << " with data " << *pi1 << endl;


  return 0;
}
