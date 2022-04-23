#ifndef MEETING_H
#define MEETING_H
#include "Time.h"
class Meeting {
private:
	float duration;
	Time startingTime;
	Time endingTime;
public:
	Meeting();
	Meeting(Time, Time);

	float getDuration();
	Time getStartingTime();
	Time getEndingTime();

	void setStartingTime(Time);
	void setStartingTime(unsigned short, unsigned short);

	void setEndingTime(Time);
	void setEndingTime(unsigned short, unsigned short);
};
#endif // !MEETING_H
