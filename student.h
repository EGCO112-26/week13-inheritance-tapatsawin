#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
using namespace std;

class NODE{
protected:
      long data;
private:
      NODE* next;
public:
        NODE(long);
      
      void show_node();
        void insert(NODE*&);
        NODE* move_next();
     
  ~NODE();
      };

#endif
