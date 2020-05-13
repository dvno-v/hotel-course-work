#ifndef DATE_H

#define DATE_H

#include <fstream>

class Date
{
private:
	unsigned year;
	unsigned month;
	unsigned day;
public:
	Date();
	Date(const unsigned&, const unsigned&, const unsigned&);
	Date(const Date&);
	~Date();
	
	void set_year(const unsigned&);
	void set_month(const unsigned&);
	void set_day(const unsigned&);

	void is_valid_input(const unsigned&, const unsigned&, const unsigned&) const;
	
	friend std::fstream& operator>>(std::fstream&, const Date&);
	friend std::fstream& operator<<(std::fstream&, const Date&);
	bool operator>(const Date&) const;
	bool operator<(const Date&) const;
	bool operator==(const Date&) const;
	bool operator>=(const Date&) const;
	bool operator<=(const Date&) const;
};

#endif