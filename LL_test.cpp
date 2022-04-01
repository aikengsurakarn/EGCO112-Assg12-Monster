#include <iostream>
#include<cstdlib>
#include"NODE.h"
#include"LL.h"
using namespace std;
int main(int argc, char *argv[])
{  LL A; //Linked List =>constructor L.hol=NUL L.size=0
   int i; 
   NODE *t; 

   for(i=1;i<argc;i++) {
                       t=new NODE(atoi(argv[i])); //constructor
                       A.add_node(t);
                       //add front of linked List + size++
                       }

   //A.atk_All(boss);                 
     A.show_all();
    //system("PAUSE");

    monster Boss("Big Boss",1000,200);

    A.atk_all(Boss); // random ลดค่า hp 
  
  
    return 0;
}
