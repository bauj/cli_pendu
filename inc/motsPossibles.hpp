#pragma once

#include <array>
#include <string_view>

const auto motsPossibles = std::array{
		"TONUS",		"LIEGE",		"SABLE",		"SAUNA",		"RHUME",		"DIEUX",
		"TACHE",		"BANJO",		"SUCRE",		"CAPOT",		"FRISE",		"EMAIL",
		"LASER",		"ECHEC",		"GLACON",		"FRIMER",		"COULIS",		"JAUGER",
		"CRAMPE",		"RANCIR",		"DEFIER",		"MORUES",		"CIMENT",		"JOUJOU",
		"DESSIN",		"PIMENT",		"GESTION",	"COULEUR",	"DOMPTER",	"PAPYRUS",
		"HAUTAIN",	"RONFLER",	"TACTILE",	"SPOLIER",	"DOYENNE",	"COUVENT",
		"GLACIER",	"EPLUCHER", "ORPHELIN", "ENSABLER", "LEGITIME", "CHARMEUR",
		"RAYONNER", "BATONNET", "GRILLAGE", "ENDOSSER", "ANCIENNE"};

const auto TAILLE_MOTS_POSSIBLES = static_cast<int>(motsPossibles.size());