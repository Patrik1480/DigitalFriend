#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

int main() {

	std::string Eingabe;
	int random;
	srand(time(NULL));
start:;
	std::cout << "Ich > ";
	std::getline(std::cin, Eingabe);
	std::cout << "DigitalFriend > ";

	//

	std::string::size_type Hallo = Eingabe.find("Hallo", 0);
	if (Hallo != std::string::npos) {
		std::cout << "Hey" << std::endl;
		goto start;
	}

	std::string::size_type wie = Eingabe.find("Wie", 0);
	if (wie != std::string::npos) {
		std::string::size_type geht = Eingabe.find("geht", 0);
		if (geht != std::string::npos) {
			std::string::size_type dir = Eingabe.find("dir", 0);
			if (dir != std::string::npos) {

				random = rand() %2;

				if (random = 2) {

					std::cout << "Mir geht es gut!" << std::endl;

				} else {

					std::cout << "Mir geht es schlecht :(" << std::endl;

				}


				
			}
		}
	}

	std::string::size_type warum = Eingabe.find("warum", 0);
	if (warum != std::string::npos) {
		std::cout << "Sorry, ich bin noch zu dumm um logische Zusammenhänge zu erkennen. Hilf mir auf github.com/patrik1480/DigitalFriend" << std::endl;
		goto start;
	}
	
	goto start;

	system("pause");
	return 0;
}