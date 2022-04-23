#ifndef TIME_H
#define TIME_H
class Time {
private:
	unsigned short hours;
	unsigned short minutes;
public:
	Time();
	Time(unsigned short, unsigned short);
	Time& operator=(Time const&);

	void setHours(unsigned short);
	void setMinutes(unsigned short);

	unsigned short getHours();
	unsigned short getMinutes();

};
#endif // !TIME_H
