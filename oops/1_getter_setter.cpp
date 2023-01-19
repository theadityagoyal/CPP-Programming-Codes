#include<iostream>
using namespace std;

class Hero
{
	private:
	int health;
	
	public:
	char level;
	
// this concept is called getter or setter and is used to access private class from anywhere
	int getHealth()
	{
		return health;
	}
	int getLevel()
	{
		return level;
	}

	void setHealth(int h)
	{
		health = h;
	}
	
	void setLevel(char c)
	{
		level = c;
	}
	
};

int main()
{
//	static allocation
	Hero a;
	
	a.setHealth(80);
	a.setLevel('A');
	
	cout << "Health is :" << a.getHealth() << endl;
	cout << "Level is :" << a.level << endl;
	
	
//	dynamic allocation
	Hero *munni = new Hero;
	
	(*munni).setHealth(70);
	(*munni).setLevel('B');
	
	cout << "Health is :" << (*munni).getHealth() << endl;
	cout << "Level is :" << (*munni).level << endl;
	
	//we can also right this type
	cout << "Health is :" << munni->getHealth() << endl;
	cout << "Level is :" << munni->level << endl;
	
	
	return 0;
}

