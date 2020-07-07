#include<iostream>
#include<string>
using namespace std;
struct car
{
	string make;
	string model;
	string color;
	string speed;
	string direction;

};
void printcurrentcar(car z)
{
	cout << "colour:______" << z.color;
	cout << endl << "make:_______" << z.make;
	cout << endl << "Direction:_______" << z.direction;
	cout << endl << "model:_______" << z.model;
	cout << endl << "speed:_______" << z.speed;

	cout << endl << "_______\n";
}
unsigned int Getcolour(void)
{
	int colour;
	cout << "Enter a color(1 to 4)" << endl;
	cin >> colour;
	switch (colour)
	{
	case 1:
		cout << "Red\n";
		break;
	case 2:
		cout << "Blue\n";
		break;
	case 3:
		cout << "White\n";
		break;
	case 4:
		cout << "Black\n";
		break;
	default:
		cout << "invalid\n";
		return false;
	}
	return true;
}
void Setcolou(unsigned int val = 1)
{
	int  m_colour;
	if ((val > 4) || (val < 1))
	{
		cout << "Error assigning colours use num 1-4 only\n";
	}

	else
	{
		m_colour = val;
	}
}
unsigned int Getmake(void)
{
	int make;
	cout << "Enter a make number(1to4)" << endl;
	cin >> make;
	switch (make)
	{
	case 1:
		cout << "Ford\n";
		break;
	case 2:
		cout << "Honda civic\n";
		break;
	case 3:
		cout << "Toyta\n";
		break;
	case 4:
		cout << "Pontiac\n";
		break;
	default:
		cout << "invalid\n";
		return false;
	}
	return true;

}

void Setmake(unsigned int val = 1)
{
	unsigned int make;
	if ((val > 4) || (val < 1))
	{
		cout << "Error assigning make use num 1-4 only\n";
	}
	else
	{
		make = val;
	}
}
unsigned int Getmodel(void)
{
	unsigned int model;
	cout << "Enter a model from (1 to 4)" << endl;
	cin >> model;
	switch (model)
	{
	case 1:
		cout << "Range rover\n";
		break;
	case 2:
		cout << "land crouser\n";
		break;
	case 3:
		cout << "Car\n";
		break;
	case 4:
		cout << "Super bike\n";
		break;
	default:
		cout << "invalid\n";
		return false;
	}
	return true;
}

void Setmodel(unsigned int val = 1)
{
	unsigned int model;

	if ((val > 4) || (val < 1))
	{
		cout << "Error assigning model use num 1-4 only\n";
	}
	else
	{
		model = val;
	}
}
unsigned int Getspeed(void)
{
	unsigned int speed;
	cout << "Enter a speed" << endl;
	cin >> speed;
	cout << speed << "km/h" << endl;
	return true;
}

void Setspeed(unsigned int val = 1)
{
	unsigned int speed;
	if (val > 200)
	{
		cout << "to fast(max speed:200km/h)\n";
	}
	else
	{
		speed = val;
	}
}
unsigned int GetDirection(void)
{
	unsigned int direction;
	cout << "Enter a Direction(1 to 4)" << endl;
	cin >> direction;
	switch (direction)
	{
	case 1:
		cout << "North\n";
		break;
	case 2:
		cout << "East\n";
		break;
	case 3:
		cout << "South\n";
		break;
	case 4:
		cout << "West\n";
		break;
	default:
		cout << "invalid\n";
		return false;
	}
	return true;
}
void Setdirection(unsigned int val = 1)
{
	unsigned int direction;

	direction = val;
}
void ChangeDirection(unsigned int val = 1)
{
	int tempDirection = val;
	if (tempDirection > 4)
	{
		tempDirection -= 4;
	}
	else if (tempDirection < 1)
	{
		tempDirection += 4;
	}
}
int main()
{
	car k;
	printcurrentcar(k);
	Getcolour();
	Getmake();
	Getmodel();
	Getspeed();
	GetDirection();
	system("Pause");
	return 0;

}