#include<iostream>
using namespace std;

class Hero
{
	public:
	int health;
	char level;
	
	//default constructor
	Hero()
	{
		cout << "constructor called";
	}
	
	//parameterised constructor
	Hero(int health, char level)
	{
		//this -> health means public wali health ki bat ho rahi h aur usme hero constructor wali value dal rahe h
		this -> health = health;
		this -> level = level;
	}
	
	//copy constructor , then defalut copy cons. is dead
	Hero(Hero &temp)
	{
		cout << "copy constructor called"<< endl;
		this -> health = temp.health;
		this -> level = temp.level;
	}
	
	void print ()
	{
		cout << "Health is : " << this -> health << endl;
		cout << "Level is : " << this -> level << endl;
	}
	
};
int main()
{
	Hero ramesh(8,'A');
	ramesh.print();
	
	//copy constructor
	Hero aditya(ramesh);
	aditya.print();
	
	return 0;
}

