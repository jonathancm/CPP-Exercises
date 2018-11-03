#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "gameObject.h"
using namespace std;

class Room: public GameObject
{
public:
	Room(string texture):m_texture(texture){};
	~Room(){};

	generateBlocks();
private:
	enum m_doors {up, down, left, right};
	string m_texture;
};