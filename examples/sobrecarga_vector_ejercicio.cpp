// sobrecarga de operadores y sintaxis avanzada const

#include <iostream>
using namespace std;

class CVector {
  public:
    int x,y;
    CVector () {};
    CVector (int a,int b) : x(a), y(b) {}

    // sobre carga los operadores para que podamos hacer las siguientes
    // operaciones  result = foo + bar - fei;
    // usa como guía los siguientes prototipos
    CVector operator + (const CVector&); //
    CVector operator - (const CVector&);
    CVector& operator = (const CVector&);
};

CVector CVector::operator- (const CVector & param){
  CVector temp;

  // codigo aquí
  return temp;
}

CVector CVector::operator+ (const CVector & param) {
  CVector temp;

  // codigo aquí
  return temp;
}

CVector& CVector::operator= (const CVector& param)
{

  // codigo aquí
  return *this;
}

int main () {

  CVector foo(3,1);
  CVector bar(1,2);
  CVector fei(9,9);
  CVector result;

  result = foo + bar - fei;

  cout << result.x << ',' << result.y << '\n';

  CVector new_one = result;
  result = result - fei;
  cout << "result" << result.x << ',' << result.y << '\n';
  cout << "new_one" << new_one.x << ',' << new_one.y << '\n';
  return 0;
}
