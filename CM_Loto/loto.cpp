//Dans les rappels
#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>


//1
const int ValMax = 49;
const int Taille = 5;
using grille = std::array<unsigned int, Taille>;

//2
void saisie (grille &a) {
	for(int i=0;i<Taille;i++){
		bool saisieCorrect = false;
		while(!saisieCorrect){
			int b;
			std::cout <<"numero "<<i+1<<" : ";
			std::cin >> b;
			if(b>0 && b<=ValMax){
				a[i]=b;
				saisieCorrect=true;
			} else {
				std::cout<<"Incorrect, les numeros doivent etres compris entre 1 et "<<ValMax<<std::endl;
			}
		}
	}
}

//3
void affiche (grille a) {
	for(int i=0;i<Taille;i++){
		std::cout<<"Numero "<<i+1<<" : "<<a[i]<<std::endl;
	}
}

//4
int aleatoire (int min, int max) {
	return rand()%(max+1-min)+min;
}

//5
int grilleAleatoire (grille &a) {
	for(int i=0;i<Taille;i++){
		a[i]=aleatoire(1,ValMax);
	}
}

int main () {
	grille Un;
	for(int i=0;i<10;i++){
		std::cout << aleatoire(3,4);
	}
}