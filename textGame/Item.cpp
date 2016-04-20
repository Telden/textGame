#include "Item.h"

Item::Item(string newName, string desc, int newCost, int def, int atk, int spd, int hp)
{
	name = newName;
	description = desc;
	cost = newCost;
	stats.defense = def;
	stats.attack = atk;
	stats.speed = spd;
	stats.health = hp;
}

string Item::getName()
{
	return name;
}

string Item::getDescription()
{
	return description;
}

int Item::getCost()
{
	return cost;
}

int Item::getHealth()
{
	return stats.health;
}

int Item::getDefense()
{
	return stats.defense;
}

int Item::getAttack()
{
	return stats.attack;
}

int Item::getSpeed()
{
	return stats.speed;
}

void Item::setName(string newName)
{
	name = newName;
}

void Item::setDescription(string newDesc)
{
	description = newDesc;
}

void Item::setCost(int newCost)
{
	cost = newCost;
}

void Item::setHealth(int newHealth)
{
	stats.health = newHealth;
}

void Item::setDefense(int newDef)
{
	stats.defense = newDef;
}

void Item::setAttack(int newAtt)
{
	stats.attack = newAtt;
}

void Item::setSpeed(int newSpeed)
{
	stats.speed = newSpeed;
}

Item Item::inputItem(int seed)
{
	ifstream fin;
	string garbage;
	string name, desc;
	int cost, def, atk, spd, hp;

	fin.open("FILE NAME HERE");

	for (int i = 0; i < seed; i++)
	{
		getline(fin, name);
		getline(fin, desc);
		fin >> cost >> def >> atk >> spd >> hp;
		getline(fin, garbage);
	}

	fin.close();

	Item itemValue(name, desc, cost, def, atk, spd, hp);

	return itemValue;
}