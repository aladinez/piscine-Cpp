#include <iostream>
#include <exception>
using namespace std;

class CBase { virtual void dummy() {} };
class CDerived: public CBase { int a; };
class BDerived: public CBase { int a; };


int main () {
  try {
    CBase * pba = new CDerived;
    CBase * pbb = new BDerived;
    BDerived * pd;

    pd = dynamic_cast<BDerived*>(pba);
    if (pd==0) cout << "Null pointer on first type-cast" << endl;

    pd = dynamic_cast<BDerived*>(pbb);
    if (pd==0) cout << "Null pointer on second type-cast" << endl;

  } catch (exception& e) {cout << "Exception: " << e.what();}
  return 0;
}


