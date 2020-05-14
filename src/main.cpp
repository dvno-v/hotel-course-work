#include <iostream>
#include <fstream>
#include "Date.cpp"
#include "Room.cpp"

//important
//file << "...."  write in file
//file >> "...."  read from file


int main(){
	// Date d(2012, 2, 29), a = d, b(2013, 3, 29);
	char asd[] = "asd";
	std::cout << "ASD\n";
	Room r;
	std::cout << "ASD\n";
	std::fstream file;
	file.open("chushka.pesho", std::ios::out);
	if(!file){
		std::cout << "ASD\n";
	}

	file >> r;
	std::cout << "ASD\n";
	file >> r;
	std::cout << "ASD\n";
	file << asd;
	std::cout << "ASD\n";

	return 0;
}
