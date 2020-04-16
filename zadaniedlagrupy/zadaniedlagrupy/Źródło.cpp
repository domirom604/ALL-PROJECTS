#include <iostream>
#include <string>

using namespace std;
class car;
class flyingcar;

class vehicle
{
public:
	float distance = 100;
	string srodowiskopracyplane;
	string srodowiskopracycar;
	
};

class car : virtual public vehicle
{
	float velocity = 250;
	float max_velocity = 300;
	int numberofwindow;
public:
	float time()
	{
		float time;
		time = distance / max_velocity;
				return time;
	}

	string podajsrodowiskopracy()
	{
		cin >> srodowiskopracycar;
		return srodowiskopracycar;
	}
	friend flyingcar;
	
	car();
};

car::car()
{
	cout << "Velocity of car is equal:" << velocity << endl;
	cout << "Max velocity of car is equal" << max_velocity << endl;
	cout <<  time() << endl;
	cout << podajsrodowiskopracy();
}

class plane : virtual public vehicle
{
public:
	
	float velocity= 500;
	float max_velocity = 600;
	int numberofwindow;
	float time()
	{
		float time;
		  time = distance / max_velocity;
		 
		  return time;
	}

	string podajsrodowiskopracy()
	{
		cin >> srodowiskopracyplane;
		return srodowiskopracyplane;
	}
	plane();
};

plane::plane()
{
	cout << "Velocity of plane is equal: " << velocity << endl;
	cout << "Max velocity of plane is equal " << max_velocity<< endl;
	cout << time() << endl;
	cout <<podajsrodowiskopracy();
}

class flyingcar :public car, public  plane
{
	
public:
	friend class car;
	
	float velocity;
	float max_velocity;	
	
	string srodowiskopracy()
	{
		return srodowiskopracyplane + srodowiskopracycar;
	}
		
	flyingcar();
};

flyingcar::flyingcar()
{
	
	velocity = (plane::velocity + car::velocity) / 2;

	max_velocity = (plane::max_velocity + car::max_velocity) / 2;
	cout << distance << endl << velocity << endl << max_velocity << endl;
}

int main()
{
	flyingcar pane;
	cout << endl << "distance: " << pane.distance << endl;
	
	cout <<  pane.srodowiskopracy();
	system("pause");
	return 0;
}