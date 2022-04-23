#include "Meeting.h"

Meeting::Meeting() {
	startingTime;
	endingTime;
}

Meeting::Meeting(Time startingTimeParam, Time endingTimeParam) {
	startingTime = startingTimeParam;
	endingTime = endingTimeParam;
}

float Meeting::getDuration() {
	float durationInMinutes = 0;
	durationInMinutes = 60 - startingTime.getMinutes();
	durationInMinutes = 60*(endingTime.getHours() - startingTime.getHours()) - 60;
}

Time Meeting::getStartingTime() {
	return startingTime;
}

Time Meeting::getEndingTime() {
	return endingTime;
}

void Meeting::setStartingTime(Time startingTimeParam) {
	startingTime = startingTimeParam;
}

void Meeting::setStartingTime(unsigned short hoursParam, unsigned short minutesParam) {
	startingTime.setHours(hoursParam);
	startingTime.setMinutes(minutesParam);
}

void Meeting::setEndingTime(Time endingTimeParam) {
	endingTime = endingTimeParam;
}

void Meeting::setEndingTime(unsigned short hoursParam, unsigned short minutesParam) {
	endingTime.setHours(hoursParam);
	endingTime.setMinutes(minutesParam);
}