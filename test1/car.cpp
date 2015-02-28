#include <iostream>
#include "car.h"
using namespace std;
Car::Car(int price, int carNum)
{
	cout << "默认构造函数"<<endl;
	setProperty(price,carNum);
}
void Car::run()
{
	cout << "car can run" << endl;
}
void Car::stop()
{
	cout <<"car can stop" << endl;
}
void Car::setProperty(int price , int carNum)
{
	this->m_price = price;
	this->m_carNum = carNum;
}
void Car::print()
{
	cout << "This car price is" << m_price <<endl;
	cout << "This car number is" << m_carNum << endl;
}
