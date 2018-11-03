#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Room.h"
using namespace std;

enum RoomType {boss, store, treasure, arcade};

class SpecialRoom: public Room
{
public:
	
private:
	int m_room_type;
};