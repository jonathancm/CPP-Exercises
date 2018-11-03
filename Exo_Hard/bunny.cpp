#include "bunny.h"

string Bunny::generateGender(int sexDiversity)
{
	if((rand() % 101) > (sexDiversity-1))
		return "male";
	else
		return "female";
}

string Bunny::generateAge(int maxAge)
{
	return rand() % (maxAge+1);
}

bool Bunny::generateRadioactivity(int radioactivityLevels)
{
	if((rand() % 101) < (radioactivityLevels))
		return true;
	else
		return false;
}