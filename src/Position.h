//
//  Position.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Position_h
#define Robot_Position_h

#include <iostream>

using namespace std;

class Position {

	private:
		int x;
		int y;

	public:
        Position(int x = 0, int y = 0);
    
        friend ostream& operator<< (ostream&, Position const&);
    
		int getX() const;

		void setX(int x);

		int getY() const;

		void setY(int y);
};

#endif