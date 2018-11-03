#include <iostream>
#include <string>
#include "bunny.h"
using namespace std;

#define STARTING_POPULATION 5
#define ADULT_AGE 2

int main()
{
	int i=STARTING_POPULATION;
	int turnNumber=0;
	list<Bunny *> bunnyList;

	while(i > 0)
	{
		Bunny* pBunny = new Bunny();
		bunnyList.push_back(pBunny);
		i++;
	}

	while(!bunnyList.empty())
	{
		printf("----------------------------");
		printf("\t Turn %d is beginning...\n", turnNumber);
		
		ProcessAging(&bunnyList);
		ProcessReproduction(&bunnyList);

		printf("----------------------------\n\n");
		sleep(2);
	}
}

/* Parse through bunny population, update their age, and make old ones die */
void ProcessAging(list<Bunny *> &bunnyList)
{
	int i=0;

	for(i=0; i<bunnyList->size();i++)
	{
		bunnyList[i]->updateAge();
		
		if(bunnyList[i]->getAge() >= 10)
		{
			printf("Bunny %s has died.\n",bunnyList[i]->getName());
			bunnyList.erase(i--); //Decrement "i" to readjust to new list positions
		}
	}
}

/* Check if there is a living male in the population. If so, add a baby bunny for each living female */
void ProcessReproduction(list<Bunny *> &bunnyList)
{
	int i=0;
	bool isAdultMale=false;

	while(!isAdultMale || i < bunnyList->size())
	{
		if(bunnyList[i]->getSex()=="male" && bunnyList[i]->getAge()>=ADULT_AGE)
			isAdultMale=true;

		i++;
	}

	for(i=0; i<bunnyList->size();i++)
	{
		bunnyList[i]->updateAge();
		
		if(bunnyList[i]->getAge() >= 10)
		{
			printf("Bunny %s has died.\n",bunnyList[i]->getName());
			bunnyList.erase(i--); //Decrement "i" to readjust to new list positions
		}
	}
}