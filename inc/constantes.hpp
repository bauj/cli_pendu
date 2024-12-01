#pragma once

#include <array>
#include <string_view>

auto const NB_TENTATIVES_MAX{10};

auto const PENDU_STEPS = std::array<std::string_view, NB_TENTATIVES_MAX>{
		R"(                                                 
                                                 
                                                 
                                                 
                                                 
                                                 
                                                  _____)",
		R"(
                                                    |
                                                    |
                                                    |
                                                    |
                                                    |
                                                  __|__)",
		R"(
                                                    |/
                                                    |
                                                    |
                                                    |
                                                    |
                                                  __|__)",
		R"(                                                    ______
                                                    |/
                                                    |
                                                    |
                                                    |
                                                    |
                                                  __|__)",
		R"(                                                    ______
                                                    |/   |
                                                    |    o
                                                    |
                                                    |
                                                    |
                                                  __|__)",
		R"(                                                    ______
                                                    |/   |
                                                    |    o
                                                    |    |
                                                    |
                                                    |
                                                  __|__)",
		R"(                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|
                                                    |
                                                    |
                                                  __|__)",
		 R"(                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|\
                                                    |
                                                    |
                                                  __|__)",
		R"(                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|\
                                                    |   /  
                                                    |
                                                  __|__)",
		R"(                                                    ______
                                                    |/   |
                                                    |    o
                                                    |   /|\
                                                    |   / \
                                                    |
                                                  __|__)"};
