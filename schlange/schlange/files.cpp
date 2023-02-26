#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
string unsernamec;
string passwordc;
string content;


void erstelltdatei() {

	ifstream checkfile;
	checkfile.open("data.txt");
	if (checkfile.is_open())
	{
		
		cout << "file found (data.txt)\n";
	}
	else {
		cout << "file missing!\n" << endl;
		cout << "creating file...\n";
		std::ofstream data("data.txt"); // erstellt datei txt daten usw.
		Sleep(3000);
		data << "username:\n" << std::endl;
		data << "password:\n" << std::endl;
		cout << "insert inputs...\n";
		Sleep(3000);
		data.open("data.txt"); Sleep(5000);
		data.close();
		cout << "file created successfully!\n";
		cout << "restart program!";
		Beep(440, 400);
		Sleep(7000);
		exit;
	}
}

void liesaususername() {
	std::ifstream data("data.txt");
	std::string line;
	int desired_line_number = 2; // change to the line number you want
	int current_line_number = 1;
	extern string content;
	while (getline(data, line)) {
		if (current_line_number == desired_line_number) {
			//std::cout << "" << desired_line_number << ": " << line << std::endl;
			content = line;
			break;
		}
		current_line_number++;
	}

	data.close();
	//cout << content;
	
}

void liesaupassword() {
	string content2;
	std::ifstream data("data.txt");
	std::string line;
	int desired_line_number = 4; // change to the line number you want
	int current_line_number = 1;
	while (getline(data, line)) {
		if (current_line_number == desired_line_number) {
			//std::cout << "" << desired_line_number << ": " << line << std::endl;
			content2 = line;
			break;
		}
		current_line_number++;
	}

	data.close();
	//cout << content2;

}



