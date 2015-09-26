#include "helpers.h"

// Supposedly grabs the item pointer by arr, and
//   moves arr up by one item
int each(int *arr)
{
  int ret = *arr;

  arr += 1;
  return ret;
}

int main()
{
  int data[] = {32, 54, 33, 76, 4, 26, 76};
  int *ptr = new int[7];

  ptr = data;
  for (int i = 0; i < 7; ++i)
    cout << each(ptr) << " ";
  delete ptr;
}

