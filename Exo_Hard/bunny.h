#include <iostream>
#include <string>
#include <stdlib.h>
#include <time>
using namespace std;

#define BUNNY_SEX_DIVERSITY 50
#define BUNNY_MAX_AGE 10
#define BUNNY_RADIOACTIVITY 2

class Bunny
{
public:
	Bunny(string color="black", string name="bob")
	{
		m_sex 	= generateGender(BUNNY_SEX_DIVERSITY);
		m_color = color;
		m_age 	= generateAge(BUNNY_MAX_AGE);
		m_name 	= name;
		radioactive_mutant_vampire_bunny=generateRadiocativity(BUNNY_RADIOACTIVITY);
	}

	Bunny(string sex="male", string color="black", int age="1", string name="buny", bool isRadioactive)
	{
		m_sex 	= sex;
		m_color = color;
		m_age 	= generage;
		m_name 	= name;
		radioactive_mutant_vampire_bunny=isRadioactive;
	}

	~Bunny();

	int getAge() {return m_age;}
	void updateAge() {m_age++;}


private:
	string m_sex;
	string m_color;
	int m_age;
	string m_name;
	bool radioactive_mutant_vampire_bunny;

	string generateGender(int sexDiversity);
	int generateAge(int maxAge);
	bool generateRadiocativity(int radioactivityLevels);
}