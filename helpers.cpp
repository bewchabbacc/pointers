#include "helpers.h"

template <class T>
void print_info(const T& var)
{
cout << "@: " << hex << &var << " Val: " << dec << var << endl;
}

