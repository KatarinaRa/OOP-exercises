#include <iostream>

using namespace std;

class MathErr{
public:
  virtual string ShowError() = 0;
};

class NotNum : public MathErr
{
public:
	string ShowError() { return "Iznimka: Nije broj"; }
};

class ZeroDevide : MathErr{
public:
    string ShowError() { return "Dijeljenje s nulom nije dozvoljeno";}

};

class Operacija : public MathErr {
public:
  string ShowError() { return "Iznimka: Nedozvoljena operacija"; }
};



