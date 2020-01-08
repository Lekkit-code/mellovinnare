#pragma once

class Song {
private:
	std::string year;
	std::string name;
	std::string artist;
public:
	Song(std::string year, std::string name, std::string artist);
	std::string GetYear();
	std::string GetName();
	std::string GetArtist();
	   };