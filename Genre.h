#pragma once
#include <string>
using namespace std;
class Genre {
public:

	Genre(string classic, string kids, string fantasy, string biography, string romantic);
	void setClassic(string classic);
	void setKids(string kids);
	void setFantasy(string fantasy);
	void setBiography(string biography);
	void setRomantic(string romantic);
	string getClassic();
	string getKidse();
	string getFantasy();
	string getBiography();
	string getRomantic();


private:
	string classic;
	string kids;
	string fantasy;
	string biography;
	string romantic;
};