#include <iostream>
class Complexe {
private:
  double re;
  double im;

public:
  Complexe(double re, double im) : re(re), im(im) {}
  void afficherComplexe() {
    std::cout << "(" << re << ", " << im << ")\n";
  }

  Complexe addition(const Complexe& autre) const {
    return Complexe(re + autre.re, im + autre.im);
  }

  Complexe soustraction(const Complexe& autre) const {
    return Complexe(re - autre.re, im - autre.im);
  }

  Complexe multiplication(const Complexe& autre) const {
    return Complexe(re * autre.re - im * autre.im, re * autre.im + im * autre.re);
  }

  Complexe division(const Complexe& autre) const {
    double d = autre.re * autre.re + autre.im * autre.im;
    return Complexe((re * autre.re + im * autre.im) / d, (im * autre.re - re * autre.im) / d);
  }
};

int main() {
  double re1, im1, re2, im2;
  std::cout << "Entrez la partie réelle du premier nombre : ";
  std::cin >> re1;
  std::cout << "Entrez la partie imaginaire du premier nombre : ";
  std::cin >> im1;
  std::cout << "Entrez la partie réelle du deuxième nombre : ";
  std::cin >> re2;
  std::cout << "Entrez la partie imaginaire du deuxième nombre : ";
  std::cin >> im2;

  // Créer les objets Complexe
  Complexe c1(re1, im1);
  Complexe c2(re2, im2);

  Complexe c3 = c1.addition(c2);
  Complexe c4 = c1.soustraction(c2);
  Complexe c5 = c1.multiplication(c2);
  Complexe c6 = c1.division(c2);

  std::cout << "Addition : ";
  c3.afficherComplexe();
  std::cout << "Soustraction : ";
  c4.afficherComplexe();
  std::cout << "Multiplication : ";
  c5.afficherComplexe();
  std::cout << "Division : ";
  c6.afficherComplexe();

  return 0;
}
