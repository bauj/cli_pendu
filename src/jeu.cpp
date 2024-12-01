#include "jeu.hpp"

#include <array>
#include <iostream>
#include <random>

#include "constantes.hpp"
#include "motsPossibles.hpp"

void afficher(std::string_view chaine) { std::cout << chaine << std::endl; }

std::string_view initMot() {
	auto generateurAleatoire = std::random_device{};
	auto generateur = std::mt19937{generateurAleatoire()};
	auto distribution =
			std::uniform_int_distribution{0, TAILLE_MOTS_POSSIBLES - 1};
	auto indiceMot = distribution(generateur);
	return motsPossibles[indiceMot];
}

void afficherEtatMot(std::string_view motState) {
    std::cout << std::string(6, ' ');
	for (auto const& c : motState) {
		std::cout << c << " ";
	}
	std::cout << std::endl;
}

void afficherPendu(int nbBadTent) {
	std::cout << PENDU_STEPS[nbBadTent] << std::endl;
}

bool faireDeviner(std::string_view motAdeviner) {
	auto nbTentatives{0};
	auto nbBadTentatives{0};
	auto proposition{' '};
	auto motState = std::string(motAdeviner.size(), '-');

	auto motTrouve{false};
	do {
		afficherEtatMot(motState);
		std::cout << " > Entrez un caractère : ";
		while (true) {
			std::cin >> proposition;
			if (std::cin.fail() || std::cin.peek() != '\n' ||
					!(isalpha(proposition))) {
				std::cout << "[!] Erreur d'entrée. On attend une lettre." << std::endl;
				std::cout << "[!] Ressayez : ";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			} else {
				break;
			}
		}

		auto charTrouve{false};
		for (int i = 0; i < motAdeviner.size(); i++) {
			if (std::toupper(proposition) == std::toupper(motAdeviner[i])) {
				charTrouve = true;
				motState[i] = motAdeviner[i];
				motTrouve = (motState == motAdeviner);
			}
		}

		if (!charTrouve) {
			afficherPendu(nbBadTentatives);
			nbBadTentatives++;
		}

		nbTentatives++;
	} while (!motTrouve && nbBadTentatives < NB_TENTATIVES_MAX);

	if (motTrouve) afficherEtatMot(motState);

	return motTrouve;
}
