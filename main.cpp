#include <iostream>
using namespace std;
#include"Monster.h"

monster::monster(string n, int h, int p)
{
  name = n;
  hp = h;
  potion = p;
  next = NULL;
}

monster:: ~monster()
{
  cout << name << " is deleted" << endl;
}

void monster:: display()
{
  cout << "Name : " << name << endl;
  cout << "Hp : " << hp << endl;
  cout << "Potion : " << potion << endl;
}

void monster::insert(monster*& new_node)
{
  new_node->next = this;
}

int monster::get(int i)
{
  if(i==1)
  {
    return hp;
  }
  else
  {
    return potion;
  }
}