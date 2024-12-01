#pragma once

#include <string_view>

std::string_view initMot();

bool faireDeviner(std::string_view motAdeviner);

void afficher(std::string_view chaine);

void afficherEtatMot(std::string_view motState);

void afficherPendu(int badTentatives);
