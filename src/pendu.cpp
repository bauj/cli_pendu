#include <iostream>
#include <string_view>

#include "constantes.hpp"
#include "jeu.hpp"

using namespace std;

int main() {
	cout << "   ----------------------------\n";
	cout << "   Bienvenue au jeu du Pendu !!\n";
	cout << "   ----------------------------\n";
	auto aDeviner = initMot();
	auto win = faireDeviner(aDeviner);
	if (win) {
		afficher("* BRAVO ! Vous avez trouvé le mot caché ! *");
	} else {
		afficher(R"( /!\ Vous avez PERDU !)");
		afficher(R"( /!\ Le mot à trouver était : )" + string(aDeviner));
	}
	return 0;
}