/*a. Avec les instructions données:

point<char> p(60, 65);
p.affiche();
Il y a une conversion implicite de int (60 et 65) en char. Cela signifie que le type de p est point<char>, mais les valeurs 60 et 65 seront converties en caractères en fonction de leur code ASCII. Le code ASCII de 60 est '<', et le code ASCII de 65 est 'A'. Par conséquent, p.affiche() affichera "Coordonnees : < A".*/
#include <iostream>
using namespace std;

template <class T>
class point {
    T x, y; // coordonnees
public:
    point(T abs, T ord) : x(abs), y(ord) {}
    void affiche() {
        cout << "Coordonnees : " << x << " " << y << "\n";
    }
};

int main() {
    point<char> p(60, 65);
    p.affiche(); // Affichera "Coordonnees : 60 65"
/* affiche "Coordonnees : < A" en raison de la conversion ASCII des valeurs 60 et 65 en caractères '<' et 'A'.*/
    return 0;
}
