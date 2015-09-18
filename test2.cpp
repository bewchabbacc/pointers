#include "helpers.h"

int main()
{
  int i = 5;
  int *pi = new int;

  cout << "pi was allocated but not initialized" << endl;
  print_info(pi);
  print_info(*pi);
  *pi = i;
  print_info(pi);
  print_info(*pi);

  return 0;
}
