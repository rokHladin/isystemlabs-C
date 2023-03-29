#include <stdio.h>
#define getName(var)  #var

struct carInstance {
	int maxSpeed;
	int maxRPM;
	int torque;
	int horsepower;
	int numberOfGears;
};

int indexOfTheBest(int a, int b, int c) {
	if (a > b && a > c) {
		return 1;
	}
	else if (b > a && b > c) {
		return 2;
	}
	else if (c > a && c > b) {
		return 3;
	}
	else {
		return 0;
	}
}


int main() {

	struct carInstance myCar = { 280, 6000, 300, 250, 6 };
    struct carInstance donCar = { 220, 6500, 320, 270, 2 };
    struct carInstance glennCar = { 250, 8500, 280, 400, 5 };

	printf("The car on place %d has the best max speed.\n", indexOfTheBest(myCar.maxSpeed, donCar.maxSpeed, glennCar.maxSpeed));
	printf("The car on place %d has the best max RPM.\n", indexOfTheBest(myCar.maxRPM, donCar.maxRPM, glennCar.maxRPM));
	printf("The car on place %d has the most torque.\n", indexOfTheBest(myCar.torque, donCar.torque, glennCar.torque));
	printf("The car on place %d has the most horsepower.\n", indexOfTheBest(myCar.horsepower, donCar.horsepower, glennCar.horsepower));
	printf("The car on place %d has the most number of gears.\n", indexOfTheBest(myCar.numberOfGears, donCar.numberOfGears, glennCar.numberOfGears));

	return 0;
}