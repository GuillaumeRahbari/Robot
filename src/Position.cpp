//
//  Position.cpp
//  Robot
//

#include "Position.h"


using namespace std;

Position::Position (int x, int y) : x(x), y(y){}

ostream& operator<< (ostream& flux, Position const& position){
    flux << "La position est : (" << position.getX() << "," << position.getY() << ")";
    return flux;
}

int Position::getX() const {
	return this->x;
}

void Position::setX(int x) {
	this->x = x;
}

int Position::getY() const {
	return this->y;
}

void Position::setY(int y) {
	this->y = y;
}
