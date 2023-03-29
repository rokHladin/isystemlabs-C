#include <stdio.h>
#define NUMBER_OF_FRIENDS 5

struct carInstance
{
	int maxSpeed;
	int maxRPM;
	int torque;
	int horsepower;
	int numberOfGears;
};

int indexOfBestInCategory(struct carInstance cars[], int numFriends, int (*getter)(struct carInstance))
{
	int bestCarIndex = 0;
	for (int i = 1; i < numFriends; i++)
	{
		if (getter(cars[i]) > getter(cars[bestCarIndex]))
		{
			bestCarIndex = i;
		}
	}

	return bestCarIndex + 1;
}

int getMaxSpeed(struct carInstance car)
{
	return car.maxSpeed;
}

int getMaxRPM(struct carInstance car)
{
	return car.maxRPM;
}

int getTorque(struct carInstance car)
{
	return car.torque;
}

int getHorsepower(struct carInstance car)
{
	return car.horsepower;
}

int getNumberOfGears(struct carInstance car)
{
	return car.numberOfGears;
}

int main()
{
	struct carInstance cars[NUMBER_OF_FRIENDS];

	struct carInstance myCar = {280, 6000, 300, 250, 6};
	struct carInstance donCar = {220, 6500, 320, 270, 2};
	struct carInstance glennCar = {250, 8500, 280, 400, 5};
	struct carInstance joshCar = {300, 7000, 250, 200, 4};
	struct carInstance jasonCar = {240, 7500, 280, 230, 5};

	cars[0] = myCar;
	cars[1] = donCar;
	cars[2] = glennCar;
	cars[3] = joshCar;
	cars[4] = jasonCar;

	printf("The car on place %d has the best max speed.\n", indexOfBestInCategory(cars, NUMBER_OF_FRIENDS, getMaxSpeed));
	printf("The car on place %d has the best max RPM.\n", indexOfBestInCategory(cars, NUMBER_OF_FRIENDS, getMaxRPM));
	printf("The car on place %d has the most torque.\n", indexOfBestInCategory(cars, NUMBER_OF_FRIENDS, getTorque));
	printf("The car on place %d has the most horsepower.\n", indexOfBestInCategory(cars, NUMBER_OF_FRIENDS, getHorsepower));
	printf("The car on place %d has the most number of gears.\n", indexOfBestInCategory(cars, NUMBER_OF_FRIENDS, getNumberOfGears));
	return 0;
}