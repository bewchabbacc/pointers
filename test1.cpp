#include "helpers.h"

int main()
{
  int i = 5;
  int *pi = &i;

  cout << "i->";
  print_info(i);
  cout << "pi->";
  print_info(pi);
  return 0;
}
