#include "helpers.h"
#include <vector>

class Base
{
private:
  static unsigned int baseCount;
protected:
  vector<string> data;
public:
  virtual ~Base()
  {
    --baseCount;
    cout << "Base Destructor! EXTERMINATE!!" << endl;
  }
  Base()
  {
    ++baseCount;
    cout << "Base Constructor!" << endl;
  }
  Base(unsigned int n)
  {
    ++baseCount;
    cout << "Base non-default constructor!" << endl;
    data.reserve(n);
  }
  void add(string s)
  {
    data.push_back(s);
  } 
  static unsigned int classCount() {
    return baseCount;
  }
  virtual void print_data()
  {
    for (vector<string>::iterator it = data.begin(); it != data.end(); ++it)
      {
	cout << *it << " ";
      }
    cout << "\nThis Base object is at location: " << this << endl;
  }
};

class Child: public Base
{
private:
  static unsigned int childCount;
  unsigned int count;
public:
  ~Child() {
    --childCount;
    cout << "Child destructor!" << endl;
  }
  Child() {
    ++childCount;
    count = 0;
    cout << "Child default constructor!" << endl;
  }
  Child(unsigned int n): Base(n)
  {
    ++childCount;
    count = n;
    cout << "Child non-default constructor!" << endl;
  }
  void print_data()
  {
    cout << "There are " << count << " items: ";
    Base::print_data();
    cout << "This Child object is at location: " << this << endl;
  }
  static unsigned int classCount() {
    return childCount;
  }
};

unsigned int Base::baseCount = 0;
unsigned int Child::childCount = 0;


int main(int argc, char **argv)
{
  if (argc < 2)
    cout << "Use: ./test3.out string1 string2 string3...";
  Child c(argc-1);
  Base *b = &c;
  Child *c2 = new Child(argc - 1);
  for (int i = 1; i < argc; i++)
    {
      c.add(string(argv[i]));
      c2->add(string(argv[i]));
    }
  cout << endl << "Showing contents through Child class" << endl;
  c.print_data();
  cout << endl << "Showing contents through Child pointer class" << endl;
  c2->print_data();
  cout << endl << "Showing contents through base class\n" << endl;
  b->print_data();

  cout << "\nThere are " << Base::classCount() << " base objects made and ";
  cout << Child::classCount() << " children ones." << endl;

  delete c2;
  return 0;
}
