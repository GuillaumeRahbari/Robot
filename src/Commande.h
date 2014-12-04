#ifndef Commande_h
#define Commande_h

#include <stddef.h>
#include <iostream>
#include <cassert>
using namespace std;

class Commande{

};

class Stack{
private:  
    
    struct Cell
    {
        Commande com;
        Cell *next;
        Cell(Commande v, Cell *n = 0) : com(v), next(n) {}
        ~Cell() {delete next;}
    };    

    Cell *head;         // Pointer to first cell
    Cell *tail;         // Pointer to last cell

public:
    // Construction and destruction
    Stack() : head(0), tail(0) {}     
   	~Stack() {delete head;} 

    // Copy constructor and copy assignment
    Stack(const Stack&);
    Stack& operator=(const Stack&);
    
    bool is_empty() const {
    	return head == 0;
    }
    
    void push(Commande); // at the beginning

    Commande pop();

    // Exception
    class Empty {};
};

#endif