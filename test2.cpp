#include "helpers.h"

int *f()
{
  int *ret = new int;

  *ret = 42;
  return ret;
}

int main()
{
  int i = 5;
  int *pi = new int;
  int *pi2 = f();

  cout << "pi was allocated but not initialized" << endl;
  print_info(pi);
  print_info(*pi);
  *pi = i;
  print_info(pi);
  print_info(*pi);
  cout << "Let's checkout pi2: \n";
  print_info(pi2);
  print_info(*pi2);
  
  delete pi;
  delete pi2;
  return 0;
}
