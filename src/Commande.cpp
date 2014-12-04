#include "Commande.h"



void Stack::push(Commande c){
    Cell *p = new Cell(c);
    if (head == 0) head = tail = p;
    else
    {
        p->next = head;
        head = p;
    }
}

Commande Stack::pop(){
	if (head == 0){
		throw Empty();
	}
    Commande c = head->com;
    if (tail == head){
    	tail = 0;
    }
    Cell *p = head;
    head = head->next;
    p->next = 0; // needed: otherwise the next line destroy the whole list!
    delete p;
    return c;
}