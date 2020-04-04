//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;


//Constructor with string title input
TopTenList::TopTenList(string title)
{
  this->title = title;
  this->_list.resize(10);
}

//Add a programming language to the list
void TopTenList::set_at(int index, Hyperlink link)
{
  this->_list[index-1] = link;
}

//Get a programming language at an index
Hyperlink TopTenList::get(int index)
{
  return this->_list[index-1];
}

//Get title of the Top Ten list
string TopTenList::get_title()
{
  return this->title;
}

//Display 0 - 10
void TopTenList::display_forward()
{
  for(int i = 0; i < _list.size(); i++){
    cout << i + 1 << ": " << this->_list[i].text << endl;
    cout << this->_list[i].url << endl;
  }
}

//Display 10 - 0
void TopTenList::display_backward()
{
  for(int i = _list.size() - 1; i >= 0; i--){
    cout << i + 1 << ": " << this->_list[i].text << endl;
    cout << this->_list[i].url << endl;
  }
}
