//
//  Position.h
//  Robot
//
//  Created by Guillaume Rahbari on 16/11/2014.
//  Copyright (c) 2014 Guillaume Rahbari. All rights reserved.
//

#ifndef Robot_Position_h
#define Robot_Position_h

namespace Robot {
	class Position {

	private:
		int x;
		int y;

	public:
		int getX();

		void setX(int x);

		int getY();

		void setY(int y);
	};
}

#endif