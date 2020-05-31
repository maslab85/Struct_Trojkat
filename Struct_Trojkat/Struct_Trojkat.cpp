#include <iostream>

using namespace std;

struct Trojkat
{
    int a;
    int b;
    int c;
};

int obwodtr(Trojkat z)
{
    int ob = 0;
    return ob = z.a + z.b + z.c;
}


int main()
{
    Trojkat p;
    cout << "Podaj bok a: " << endl;
    cin >> p.a;
    cout << "Podaj bok b: " << endl;
    cin >> p.b;
    cout << "Podaj bok c: " << endl;
    cin >> p.c;
    cout << "Obwod Trojkata:" << obwodtr(p);
}