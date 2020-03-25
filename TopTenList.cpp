//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList(string title)
{
  this->title = title;
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
