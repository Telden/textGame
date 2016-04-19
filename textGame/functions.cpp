#include "header.h";

void displayStats(Player player)
{
	cout << "Health: " << player.getHealth() << endl;
	cout << "Strength: " << player.getAttack() << endl;
	cout << "Defense: " << player.getDefense() << endl;
	cout << "Speed: " << player.getSpeed() << endl;
}

void displayEnemy(Enemy enemy)
{
	cout << "Enemy Name: " << enemy.getName();
	cout << "Description: " << enemy.getDescription();
}

void clearScreen()
{
	system("CLS");
}

void outOfCombatMenu(Player player)
{
	int choice;
	cout << "1. Continue Onwards!" << endl;
	cout << "2. Rest" << endl;
	cout << "3. Shop" << endl;
	cout << "4. Quit" << endl;
	cout << "Please enter decision: ";
	cin >> choice;

	switch (choice)
	{

	}

}