#include "Time.h"
Time& Time::operator=(Time const& timeParam) {
	hours = timeParam.hours;
	minutes = timeParam.minutes;
}

void Time::setHours(unsigned short hoursParam) {
	hours = hoursParam;
}

void Time::setMinutes(unsigned short minutesParam) {
	minutes = minutesParam;
}

unsigned short Time::getHours() {
	return hours;
}

unsigned short Time::getMinutes() {
	return minutes;
}