#include <string>

using namespace std;

class Igrac
{
    string name;
    int win;
    int number;
    string choice;
public:
    Igrac();
    string getName();
    void setName(string n);
    int getWin();
    void setWin();
    int getNumber();
    void setNumber(int num);
    string getChoice();
    void setChoice(string ch);
    ~Igrac();

};
