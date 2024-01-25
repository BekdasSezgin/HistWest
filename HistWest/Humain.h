#pragma once
#include <string>
using namespace std;
#include <string>
class Humain
{
private:
	string nom;
	string boissonFavorite;
public:
	// Constructeur :
	Humain(const string nom, const string BoissonFavorite = "eau");
	string getBoissonFavorite() const;
	void setBoissonFavorite(const string nouvelleBoissonFavorite);
	void parle(const string texte);
	string getNom();
	void sePresente();
	void boit();


};