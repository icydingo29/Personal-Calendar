#ifndef DATE_H
#define DATE_H
class Date {
private:
	unsigned short day;
	unsigned short month;
	unsigned short year;
public:
	Date();
	Date(unsigned short, unsigned short, unsigned short);
	Date& operator=(Date const&);
	Date(Date const&);

	unsigned short getDay();
	unsigned short getMonth();
	unsigned short getYear();

	void setDay(unsigned short dayParam);
	void setMonth(unsigned short monthParam);
	void setYear(unsigned short yearParam);

	void copyValues(unsigned short, unsigned short, unsigned short);
	void print();
};

#endif