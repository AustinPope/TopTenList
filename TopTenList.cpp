//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
  this->_list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  this->_list[index] = link;
}

Hyperlink TopTenList::get(int index)
{
  return this->_list[index];
}

string TopTenList::get_title()
{
  return this->title;
}

void TopTenList::display_forward()
{
  for(int i = 0; i < _list.size(); i++)
    cout << i << ": " << _list[i].text << endl;
}

void TopTenList::display_backward()
{
  for(int i = _list.size() - 1; i >= 0; i--)
    cout << i << ": " << _list[i].text << endl;
}
