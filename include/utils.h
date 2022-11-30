#ifndef S_MDVRP_UTILS_H
#define S_MDVRP_UTILS_H

#include "solution.h"
#include <random>
#include <iostream>
#include <list>

/**
 * Vérifie si la solution est valide.
 * @param solution Solution à vérifier
 * @return <b>true</b> si valide, <b>false</b> sinon
 */
bool isSolutionValid(Solution &solution);

// TODO: Translate to french
/**
 * Checks if the producers are producing a cycle which means they are interlocking themselves.
 * @param solution Solution to check
 * @return<b>true</b> if they are cycling (interlocking), <b>false</b>otherwise/
 */
bool producersCycling(Solution &solution);

/**
 * Détecte quels clients ne sont pas desservis pour chaque producteur d'une solution.
 * @param solution Solution à vérifier
 * @return std::vector de taille nbProducteurs rempli avec des paires de <Route, std::vector<Node>> correspondant
 * aux clients non-livrés par un producteur.
 */
std::vector<std::pair<Route, std::vector<Node>>> getInvalidRoutesIfAny(const Solution &solution, const Instance &i);

/**
 * Génère un entier aléatoire dans [minVal; maxVal] en excluant les valeurs dans excludedVals.
 * @param minVal Valeur minimale du nombre aléatoire généré
 * @param maxVal Valeur maximale du nombre aléatoire généré
 * @param excludedVals Liste d'entiers qu'on souhaite exclure. Seulement ceux entre minVal et maxVal seront considérés.
 * @return Entier entre minVal et maxVal qui n'appartient pas à excludedVals.
 */
std::discrete_distribution<>
getRandomIntDistribution(int minVal, int maxVal, const std::vector<int>& excludedVals);

/**
 * Filtre un vector en enlevant les duplicats qui sont côte-à-côte.
 * @param vector Vecteur à filtrer
 * @return Vecteur filtré
 */
std::vector<Node> removeSideBySideDuplicatesInVector(const std::vector<Node> &vector);

std::vector<Node> removeDuplicatesInVector(std::vector<Node> vector);

#endif //S_MDVRP_UTILS_H