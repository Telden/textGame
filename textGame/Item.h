#ifndef ITEM_H
#define ITEM_H


// This can be replaced by a header that includes all libraries and namespace, once implemented
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

struct Buff
{
	int defense;
	int attack;
	int speed;
	int health;
};

class Item
{

	private:
		string name;
		string description;
		int cost;
		Buff stats;

	public:
		Item();
		Item(string newName, string desc, int newCost, int def, int atk, int spd, int hp);
		~Item();

		string getName();
		string getDescription();
		int getCost();
		int getHealth();
		int getDefense();
		int getAttack();
		int getSpeed();

		void setName(string);
		void setDescription(string);
		void setCost(int);
		void setHealth(int);
		void setDefense(int);
		void setAttack(int);
		void setSpeed(int);

		Item inputItem(int);
};

Item::Item()
{
}

Item::~Item()
{
}

#endif
