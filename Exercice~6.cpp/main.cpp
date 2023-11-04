#include <iostream>
#include "vectok.h"

int main() {
  vectok v1(10);
  for (int i = 0; i < 10; ++i)
    v1[i] = i;

  vectok v2(v1);
  for (int i = 0; i < v2.taille(); ++i)
    std::cout << v2[i] << " ";
  std::cout << std::endl;

  vectok v3 = v1;
  for (int i = 0; i < v3.taille(); ++i)
    std::cout << v3[i] << " ";
  std::cout << std::endl;

  return 0;
}
/*La classe vectok dérive de vect et ajoute les membres suivants :

Un constructeur par recopie qui copie les éléments du vecteur source dans le vecteur cible.
Un opérateur d’affectation qui assigne les éléments du vecteur source au vecteur cible.
Une fonction membre taille qui renvoie la dimension du vecteur.
Le constructeur par recopie de vectok appelle le constructeur par recopie de vect pour allouer l’espace nécessaire pour le vecteur cible. Ensuite, il copie les éléments du vecteur source dans le vecteur cible, un par un.

L’opérateur d’affectation de vectok fonctionne de manière similaire. Il appelle d’abord le destructeur de vect pour libérer l’espace occupé par le vecteur cible. Ensuite, il alloue l’espace nécessaire pour le vecteur cible. Enfin, il copie les éléments du vecteur source dans le vecteur cible.

La fonction membre taille renvoie simplement la valeur de la variable membre nelem.

Exemple d’exécution

0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
Comme on peut le voir, l’affectation et la transmission par valeur d’objets de type vectok s’y déroulent convenablement.*/