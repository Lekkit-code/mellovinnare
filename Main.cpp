#include <iostream>
#include <vector>
#include "Song.h"
#include <Windows.h>
#include <cstdbool>
#include <string>
#include <cstdlib>
#include <ctime>

std::vector<Song> CreateVectorOfWinners() {
	std::vector<Song> songs;
	songs.push_back(Song("1958", "Lilla stjärna", "Alice Babs"));
	songs.push_back(Song("1959", "Augustin", "Brita Borg"));
	songs.push_back(Song("1960", "Alla andra får varann", "Siw Malmkvist"));
	songs.push_back(Song("1961", "April, april", "Lill-Babs"));
	songs.push_back(Song("1962", "Sol och vår", "Inger Berggren"));
	songs.push_back(Song("1963", "En gång i Stockholm", "Monica Zetterlund"));
	songs.push_back(Song("1965", "Absent Friend", "Ingvar Wixell"));
	songs.push_back(Song("1966", "Nygammal vals", "Lill Lindfors & Svante Thuresson"));
	songs.push_back(Song("1967", "Som en dröm", "Östen Warnerbring"));
	songs.push_back(Song("1968", "Det börjar verka kärlek banne mig", "Claes-Göran Hederström"));
	songs.push_back(Song("1969", "Judy min vän", "Tommy Körberg"));
	songs.push_back(Song("1971", "Vita vidder", "Family Four"));
	songs.push_back(Song("1972", "Härliga sommardag", "Family Four"));
	songs.push_back(Song("1973", "Sommar'n som aldrig säger nej", "Malta"));
	songs.push_back(Song("1974", "Waterloo", "ABBA"));
	songs.push_back(Song("1975", "Jennie, Jennie", "Lasse Berghagen"));
	songs.push_back(Song("1977", "Beatles", "Forbes"));
	songs.push_back(Song("1978", "Det blir alltid värre framåt natten", "Björn Skifs"));
	songs.push_back(Song("1979", "Satellit", "Ted Gärdestad"));
	songs.push_back(Song("1980", "Just nu!", "Tomas Ledin"));
	songs.push_back(Song("1981", "Fångad i en dröm", "Björn Skifs"));
	songs.push_back(Song("1982", "Dag efter dag", "Chips"));
	songs.push_back(Song("1983", "Främling", "Carola Häggkvist"));
	songs.push_back(Song("1984", "Diggi loo diggi ley", "Herreys"));
	songs.push_back(Song("1985", "Bra vibrationer", "Kikki Danielsson"));
	songs.push_back(Song("1986", "E' de' det här du kallar kärlek", "Lasse Holm & Monica Törnell"));
	songs.push_back(Song("1987", "Boogaloo", "Lotta Engberg"));
	songs.push_back(Song("1988", "Stad i ljus", "Tommy Körberg"));
	songs.push_back(Song("1989", "En dag", "Tommy Nilsson"));
	songs.push_back(Song("1990", "Som en vind", "Edin-Ådahl"));
	songs.push_back(Song("1991", "Fångad av en stormvind", "Carola Häggkvist"));
	songs.push_back(Song("1992", "Imorgon är en annan dag", "Christer Björkman"));
	songs.push_back(Song("1993", "Eloise", "Arvingarna"));
	songs.push_back(Song("1994", "Stjärnorna", "Marie Bergman & Roger Pontare"));
	songs.push_back(Song("1995", "Se på mig", "Jan Johansen"));
	songs.push_back(Song("1996", "Den vilda", "One More Time"));
	songs.push_back(Song("1997", "Bara hon älskar mig", "Blond"));
	songs.push_back(Song("1998", "Kärleken är", "Jill Johnson"));
	songs.push_back(Song("1999", "Tusen och en natt", "Charlotte Nilsson"));
	songs.push_back(Song("2000", "När vindarna viskar mitt namn", "Roger Pontare"));
	songs.push_back(Song("2001", "Lyssna till ditt hjärta", "Friends"));
	songs.push_back(Song("2002", "Never Let It Go", "Afro-dite"));
	songs.push_back(Song("2003", "Give Me Your Love", "Fame"));
	songs.push_back(Song("2004", "Det gör ont", "Lena Philipsson"));
	songs.push_back(Song("2005", "Las Vegas", "Martin Stenmarck"));
	songs.push_back(Song("2006", "Evighet", "Carola Häggkvist"));
	songs.push_back(Song("2007", "The Worrying Kind", "The Ark"));
	songs.push_back(Song("2008", "Hero", "Charlotte Perrelli"));
	songs.push_back(Song("2009", "La Voix", "Malena Ernman"));
	songs.push_back(Song("2010", "This Is My Life", "Anna Bergendahl"));
	songs.push_back(Song("2011", "Popular", "Eric Saade"));
	songs.push_back(Song("2012", "Euphoria", "Loreen"));
	songs.push_back(Song("2013", "You", "Robin Stjernberg"));
	songs.push_back(Song("2014", "Undo", "Sanna Nielsen"));
	songs.push_back(Song("2015", "Heroes", "Måns Zelmerlöw"));
	songs.push_back(Song("2016", "If I Were Sorry", "Frans"));
	songs.push_back(Song("2017", "I Can't Go On", "Robin Bengtsson"));
	songs.push_back(Song("2018", "Dance You Off", "Benjamin Ingrosso"));
	songs.push_back(Song("2019", "Too Late For Love", "John Lundvik"));
	return songs;
}

void GuessYear(std::vector<Song> songs) {
	int correctAnswers = 0;
	while (!songs.empty()) {
		int selection = rand() % (songs.size());
		std::cout << songs[selection].GetName() << " med " << songs[selection].GetArtist() << std::endl;
		std::string guess;
		std::getline(std::cin, guess);
		if (guess == songs[selection].GetYear()) {
			std::cout << "Rätt svar!" << std::endl;
			correctAnswers++;
		}
		else {
			std::cout << "Fel svar! Rätt svar var " << songs[selection].GetYear() << std::endl;
		}
		songs.erase(songs.begin() + selection);
	}
	std::cout << "Du fick " << correctAnswers << " rätt." << std::endl;
}

void GuessNameWithArtist(std::vector<Song> songs) {
	int correctAnswers = 0;
	while (!songs.empty()) {
		int selection = rand() % (songs.size());
		std::cout << songs[selection].GetYear() << " - " << songs[selection].GetArtist() << std::endl;
		std::string guess;
		std::getline(std::cin, guess);
		if (guess == songs[selection].GetName()) {
			std::cout << "Rätt svar!" << std::endl;
			correctAnswers++;
		}
		else {
			std::cout << "Fel svar! Rätt svar var " << songs[selection].GetName() << std::endl;
		}
		songs.erase(songs.begin() + selection);
	}
	std::cout << "Du fick " << correctAnswers << " rätt." << std::endl;
}

void GuessNameWithoutArtist(std::vector<Song> songs) {
	int correctAnswers = 0;
	while (!songs.empty()) {
		int selection = rand() % (songs.size());
		std::cout << songs[selection].GetYear() << std::endl;
		std::string guess;
		std::getline(std::cin, guess);
		if (guess == songs[selection].GetName()) {
			std::cout << "Rätt svar!" << std::endl;
			correctAnswers++;
		}
		else {
			std::cout << "Fel svar! Rätt svar var " << songs[selection].GetName() << std::endl;
		}
		songs.erase(songs.begin() + selection);
	}
	std::cout << "Du fick " << correctAnswers << " rätt." << std::endl;
}

void GuessArtistWithName(std::vector<Song> songs) {
	int correctAnswers = 0;
	while (!songs.empty()) {
		int selection = rand() % (songs.size());
		std::cout << songs[selection].GetYear() << " - " << songs[selection].GetName() << std::endl;
		std::string guess;
		std::getline(std::cin, guess);
		if (guess == songs[selection].GetArtist()) {
			std::cout << "Rätt svar!" << std::endl;
			correctAnswers++;
		}
		else {
			std::cout << "Fel svar! Rätt svar var " << songs[selection].GetArtist() << std::endl;
		}
		songs.erase(songs.begin() + selection);
	}
	std::cout << "Du fick " << correctAnswers << " rätt." << std::endl;
}

void GuessArtistWithoutName(std::vector<Song> songs) {
	int correctAnswers = 0;
	while (!songs.empty()) {
		int selection = rand() % (songs.size());
		std::cout << songs[selection].GetYear() << std::endl;
		std::string guess;
		std::getline(std::cin, guess);
		if (guess == songs[selection].GetArtist()) {
			std::cout << "Rätt svar!" << std::endl;
			correctAnswers++;
		}
		else {
			std::cout << "Fel svar! Rätt svar var " << songs[selection].GetArtist() << std::endl;
		}
		songs.erase(songs.begin() + selection);
	}
	std::cout << "Du fick " << correctAnswers << " rätt." << std::endl;
}

void ListAllSongs(std::vector<Song> songs) {
	for (auto s : songs) {
		std::cout << "År: " << s.GetYear() << " Låtnamn: " << s.GetName() << " Grupp/Artist: " << s.GetArtist() << std::endl;
	}
}

int main()
{
	srand(time(NULL));
	SetConsoleOutputCP(1252);
	std::vector<Song> songs = CreateVectorOfWinners();

	while (true) {
		std::cout << "1. Gissa årtal" << std::endl << "2. Gissa låtnamn med artist/grupp" << std::endl << "3. Gissa låtnamn utan artist/grupp" << std::endl << "4. Gissa artist med låtnamn" << std::endl << "5. Gissa artist utan låtnamn" << std::endl << "6. Lista alla bidrag" << std::endl << "7. Avsluta" << std::endl;
		std::string selection; 
		std::getline(std::cin, selection);
		if (selection == "1") {
			GuessYear(songs);
		}
		else if (selection == "2") {
			GuessNameWithArtist(songs);
		}
		else if (selection == "3") {
			GuessNameWithoutArtist(songs);
		}
		else if (selection == "4") {
			GuessArtistWithName(songs);
		}
		else if (selection == "5") {
			GuessArtistWithoutName(songs);
		}
		else if (selection == "6") {
			ListAllSongs(songs);
		}
		else if (selection == "7") {
			break;
		}
		else {
			std::cout << "Ange ett giltigt val" << std::endl;
		}
	}

}
