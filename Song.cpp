#include <string>
#include "Song.h"

Song::Song(std::string year, std::string name, std::string artist) {
	this->year = year;
	this->name = name;
	this->artist = artist;
}

std::string Song::GetYear() {
	return this->year;
}

std::string Song::GetName() {
	return this->name;
}

std::string Song::GetArtist() {
	return this->artist;
}

