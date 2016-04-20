#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int MAX_HIGHSCORES = 10;
void displayHighscores()
{
	fstream inputF;
	string data;
	inputF.open("highscores.txt");
	for (int i = 0; i < MAX_HIGHSCORES; i++)
	{
		getline(inputF, data);
		cout << data << endl;
		getline(inputF, data);
		cout << data << endl;
	}
	inputF.close();
}

void rest(Player playerObj)
{
	string input;
	bool lock = false;
	int cost1 = 20, 
		 cost2 = (.1 * player.getHealth()),
		 cost3 = (.25 * player.getHealth()),
		 recovery;
	cout << "REST MENU\n"
		<< "1) Dirt Floor Nap\n" << "\tCost: " << cost1 << endl
		<< "2) Basic Sleep\n" << "\tCost: " << cost2 << endl
		<< "3) Pampered Sleep\n" << "\tCost: " << cost3 << endl
		<< "4) Quit\n\n"
		<<"What number would you like?  ";
	do
	{
		cin >> input;

		if (input == "1")
		{
			recovery = 20 + player.getHealth();
			player.setHealth(recovery);
			lock = true;
		}
		else if (input == "2")
		{
			recovery = (.1 * player.getHealth());
			player.setHealth(recovery);
			lock = true;
		}
		else if (input == "3")
		{
			recovery = (.25 * player.getHealth());
			player.setHealth(recovery);
			lock = true;
		}
		else if (input == "quit")
		{
			lock = true;
		}
		else
		{
			cout << "Invalid input. Please enter the number of the selection you want.\n\n";
		}
	}
	while (lock);
	return;
}

void purchase(Item itemObj, Player playerObj)
{
	int score;
	if (itemObj.getItemCost() < playerObj.getScore())  
	{
		score = player.getScore() - itemObj.getItemCost;
		score = -score;
		player.changeScore(score);
		equip(itemObj, playerObj);
	}
	else
	{
		cout << "You do not have enough gold to purchase this item.\n";
	}
	return;
}

void equip(Item itemObj, Player playerObj)
{
	playerObj.changeHealth(itemObj.getHealth());
	playerObj.changeHealth(itemObj.getDefense());
	playerObj.changeHealth(itemObj.getAttack());
	playerObj.changeHealth(itemObj.getSpeed());
	return;
}

