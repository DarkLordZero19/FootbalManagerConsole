#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class player
{
private:
	int id;
	string firstname="";
	string secondname="";
	float rating="";
	string position="";
	int number=0;
	string club="";
public:
	void Player(string firstname, string secondname);
	void setRating(float rating);
	void setPosition(string position);
	void setNumber(int number);
	void setClub(string club);
	string getString();
};

