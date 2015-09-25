#include "helpers.h"
#include <stdexcept>

class IntArrWrapper
{
private:
  int cap;
  int *data;
public:
  IntArrWrapper() {cap = 5; data = new int[5];}
  IntArrWrapper(int c) {
    if (c < 5)  // we're forcing a minimum of 5 ints (why not)
      c = 5;
    cap = c;
    data = new int[c];
  }
  ~IntArrWrapper() { delete [] data; cout << "Deleted the data!" << endl; }
  int& operator[] (int n) throw (out_of_range) {
    if (n < 0 || n >= cap)
      throw out_of_range("Illegal index!\n");
    return data[n];
  }
  int length() const {
    return cap;
  }

  friend ostream& operator<< (ostream&, const IntArrWrapper&);
};

ostream& operator<< (ostream& o, const IntArrWrapper& a)
{
  o << "@: " << &a;
  o << "\ncap var at: " << &(a.cap);
  o <<"\ndata at " << &(a.data) << " its pointer is " << a.data << endl;
  return o;
}

int main() {
  IntArrWrapper arr;
  IntArrWrapper *arr2 = new IntArrWrapper(10);

  cout << "ARR:\n";
  print_info(arr);
  cout << "ARR2:\n";
  print_info(arr2);
  cout << "*ARR2:\n";
  print_info(*arr2);

  delete arr2;
  return 0;
}
