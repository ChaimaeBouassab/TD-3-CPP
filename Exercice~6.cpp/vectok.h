#ifndef VECTOK_H_
#define VECTOK_H_

class vectok {
public:
  int nelem;
  double *adr;

  vectok(int n);
  vectok(const vectok &v);
  vectok& operator=(const vectok &v);
  ~vectok();

  int taille() const;

  // ...
};

#endif VECTOK_H_
