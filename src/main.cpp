#include <iostream>

#include "Date.cpp"

int main(){
	Date d(2012, 2, 29), a = d, b(2013, 3, 29);

	std::cout << std::boolalpha << (d == a) << '\n' << (d > a )<< "\n" <<( b > d);	
	return 0;
}