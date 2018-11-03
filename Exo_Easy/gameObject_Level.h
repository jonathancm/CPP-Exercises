#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "gameObject.h"
using namespace std;

class Level:public GameObject
{
public:
	Level(){};
	~Level(){};
private:
	int m_nb_rooms;
	string m_curse;

	
};