#include "Date.h"
#include <iostream>
//#include <stdexcept>

Date::Date() :day(1), month(1), year(2023){

}

Date::Date(unsigned short dayParam, unsigned short monthParam, unsigned short yearParam) : day(dayParam), month(monthParam), year(yearParam){

}

Date& Date::operator=(Date const& dateParam){  
	if (this != &dateParam) {
		copyValues(dateParam.day, dateParam.month, dateParam.year);
	}
	
	return *this;
}

Date::Date(Date const& dateParam) {
	copyValues(dateParam.day, dateParam.month, dateParam.year);
}

unsigned short Date::getDay() {
	return day;
}

unsigned short Date::getMonth() {
	return month;
}

unsigned short Date::getYear() {
	return year;
}

void Date::setDay(unsigned short dayParam) {
	/*if (dayParam < 0||dayParam>32)
		throw std::invalid_argument("Invalid day!");*/
	day = dayParam;		
}
void Date::setMonth(unsigned short monthParam) {
	month = monthParam;
}

void Date::setYear(unsigned short yearParam) {
	year = yearParam;
}

void Date::copyValues(unsigned short dayParam, unsigned short monthParam, unsigned short yearParam) {
	day = dayParam;
	month = monthParam;
	year = yearParam;
}

void Date::print() {
	if (day < 10)
		std::cout << "0"<<day;
	else
		std::cout << day;

	std::cout << "::";

	if (month < 10)
		std::cout << "0" << month;
	else
		std::cout << month;

	std::cout << "::";

	std::cout << year<<'\n';
}