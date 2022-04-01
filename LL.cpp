#include <iostream>
#include"Monster.h"
#include"LL.h"
using namespace std;
LL::LL(){ //done
       hol=NULL;
       size=0;
}

LL::~LL()
{
          //clear all nodes
          cout<<"destructor"<<endl;        

  monster* t=hol;
  int i;
  for (i=0; i<size; i++)
    {
      hol = hol->move_next();
      delete t;
      t = hol;
    }
  
  size = 0;
}

int LL::show_all()
{
  monster* t=hol;
  int i;
  int dmg = 0;
  for(i=0;i<size;i++)
  {
    t->display();
    dmg = dmg + t->get(5);
    t=t->move_next();
    return dmg;
             /**
             complete this part
             */
              
 }
}
void LL::add_node(monster *&new_node){//done

          hol->insert(new_node);// new_next->next=hol;
          hol=new_node;        

       size++;

 }

int monster::atk_All(monster* t, int x)
{
  int hp = t->get(2)-x;
  if (hp <= 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

