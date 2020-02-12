#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

//Constructor for Inventory Object
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

//This function decrements the stock of an item
void Inventory::sell()
{
  m_in_stock--;
}

//THis Function allows an items values to be set
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
