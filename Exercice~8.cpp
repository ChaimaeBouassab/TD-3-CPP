#include <iostream>

template <typename T>
T carre(T x) {
    return x * x;
}

int main() {
    int x = 5;
    double y = 3.14;

    std::cout << "Le carré de 5 est : " << carre(x) << std::endl;
    std::cout << "Le carré de 3.14 est : " << carre(y) << std::endl;

    return 0;
}
