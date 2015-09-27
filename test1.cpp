#include "helpers.h"

void f_ptr(int *x)
{
  cout << "x is a pointer sent by value->";
  print_info(x);
}

void f_ptr_ref(int* &x)
{
  cout << "x is a pointer sent by reference->";
  print_info(x);
}

int main()
{
  int i = 5;
  int *pi = &i;
  int *pi2 = NULL; // Dereferencing this will seg-fault!
  int *pi3; // THIS IS A BAD IDEA!

#ifdef CRASHME
  int *pi4 = (int*)5; // THIS IS EVEN WORSE!!!

  *pi4 = 10; // Congrats! you just got a segfault! I hope you're proud
#endif
  
  cout << "i->";
  print_info(i);
  cout << "pi->";
  print_info(pi);
  cout << "*pi->";
  print_info(*pi);
  i = 8;
  cout << "i->";
  print_info(i);
  cout << "pi->";
  print_info(pi);
  cout << "*pi->";
  print_info(*pi);

  cout << "\nLet's see our other pointers..." << endl;
  print_info(pi2);
  print_info(pi3);

  f_ptr(pi);
  f_ptr_ref(pi);
  return 0;
}
