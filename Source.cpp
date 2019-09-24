#include "Header.h"

int main(void)
{
	enum WarHead { EXPLOSIVE, NUCLEAR };

	typedef struct Position
	{
		int x, y;

		void print()
		{
			std::cout << x << y;
		}

	}Cordinate;

	typedef struct Enemy
	{
		Cordinate cordinatess;

	}Target;

	struct Missile
	{
		WarHead payload;
		Cordinate cordinates;
		Target target;
		bool armed;

		void armed()
		{
			(armed) ? armed = false : armed = true;
		}

		void update()
		{
			cordinates.x += 1;
			cordinates.y += 2;
		}
	};

	std::cout << "Welcome to C++ " << std::endl;
	std::cin.get();
}
