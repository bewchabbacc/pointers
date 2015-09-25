#include "helpers.h"

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int arr2[5];
  int *arr3 = new int[5];

  for (int i = 0; i < 5; ++i)
    {
      arr2[i] = 2*i;
      arr3[i] = 3*i;
    }
  cout << "Arr info: ";
  print_info(arr);
  cout << "\nArr2 info: ";
  print_info(arr2);
  cout << "\nArr3 info: ";
  print_info(arr3);
  cout << "\nArr[1]: ";
  print_info(arr[1]);
  cout << "\nArr2[2]: ";
  print_info(arr2[2]);
  cout << "\nArr3[3]: ";
  print_info(arr3[3]);
  cout << endl;
  
  delete [] arr3;
  return 0;
}
