#include "player.h"

void player::Player(string firstname, string secondname)
{
	this->firstname = firstname;
	this->secondname = secondname;
}

void player::setRating(float rating)
{
	this->rating = rating;
}

void player::setPosition(string position)
{
	this->position = position;
}

void player::setNumber(int number)
{
	this->number = number;
}

void player::setClub(string club)
{
	this->club = club;
}

string player::getString()
{
	string str = "";
	str+= to_string(id)+";";
	str+= firstname+"";
	str+= secondname+"";
	str+= to_string(rating)+";";
	str+= position + "";
	str+= to_string(number)+";";
	str+= club+"";
	return string();
}
