#include <iostream>
using namespace std;

class monster{
      int hp,potion;
      string name;
      monster* next;
public:
        monster(string,int,int);
        void display();
        void insert(monster*&);
        int get(int);
        monster* move_next();
        ~monster();
        int atk_All(monster,int);
      };


