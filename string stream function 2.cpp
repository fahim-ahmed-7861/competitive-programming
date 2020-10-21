// stringstreams
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
  string mystr;
  float price = 0;
  int quantity = 0;

  int ara[100],i=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> ara[i++];
  cout << "Enter quantity: ";
  getline (cin,mystr);

     stringstream(mystr) >> quantity;

  cout << "Total price: " << price*quantity << endl;
  return 0;
}
