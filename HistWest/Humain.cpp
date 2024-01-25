#include <iostream>
#include "Humain.h"
using namespace std;
Humain::Humain(const string nom, const string BoissonFavorite /*="eau"*/) : nom(nom), boissonFavorite(BoissonFavorite)
{
}

string Humain::getBoissonFavorite() const
{
	return boissonFavorite;
}

void Humain::setBoissonFavorite(const string nouvelleBoissonFavorite)
{
	if (!nouvelleBoissonFavorite.empty())
		boissonFavorite = nouvelleBoissonFavorite;
}

void Humain::parle(const string texte)
{
	cout << "(" << nom << ")" << texte;
}

string Humain::getNom()
{
	return nom;
}

void Humain::sePresente()
{
	cout << "Mon nom est " << getNom() << ", ma boisson preferee est le " << getBoissonFavorite() << endl;
}

void Humain::boit()
{
	cout << "Ah! Un bon verre de " << getBoissonFavorite() << " ! GLOUPS!" << endl;
}
