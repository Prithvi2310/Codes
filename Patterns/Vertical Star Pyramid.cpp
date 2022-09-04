#include <iostream>
#include <string>

using namespace std;

int
main ()
{
  cout << "Enter number for Vertical Star Pyramid: ";
  int n;
  cin >> n;
  for (int i = 0; i <= n / 2; i++)
    {
      for (int j = 0; j <= i; j++)
	cout << "* ";
      cout << endl;
    }
  for (int i = n / 2 - 1; i >= 0; i--)
    {
      for (int j = 0; j <= i; j++)
	cout << "* ";
      cout << endl;
    }

  return 0;
}
