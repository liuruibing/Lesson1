#include <iostream>
#include "car.h"

using namespace std;

int main(int argc, char *argv[])
{
	Car a(3,3);
	a.run();
	a.stop();
	a.setProperty(50,100);
	return 0;
}

