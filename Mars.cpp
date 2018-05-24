// such garbage pls dont look
#include<iostream.h>


bool quit = true;

struct pos {

	int x,y

};


class player {

	// currently an arbitrary symbol

	String name;
public:
	void setName(String);

};

void player::setname(string name) {

	playerName = name;

}


void setup() {

	// HARDCODED SETTINGS
	int mapSize = 20; // mapSize x mapSize
	int fpsLimit = 60;

	

	quit = false;
}


void main() {

	setup()

	player p1;
	p1.setname("YourName");

	while (quit != true) {
	
		quit = true;

	}

}