#ifndef _HELPERS_H_
#define _HELPERS_H_
#include <iostream>
using namespace std;

template <class T>
void print_info(const T& var)
{
  cout << "@: " << &var << " Sz: " << sizeof(var);
  cout << " Val: " << var << endl;
}


#endif
