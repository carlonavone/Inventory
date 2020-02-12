#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;

//Constructor for Inventory Object
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

//This function decrements the stock of an item only if it is not already equal to 0
void Inventory::sell()
{
  if(this->m_in_stock == 0)
  {
    cout << "Sorry, that item is out of stock"<< endl;
  }
  else
  {
    m_in_stock--;
  }
}

//This Function allows an items values to be set for an inventory item
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
