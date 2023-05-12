#include <iostream>
#include "stworek.h"

using namespace std;

void Stworek::karmienie(){
    glod += 1;
    pragnienie -= 1;
}

void Stworek::picie() {
    pragnienie += 1;
    glod -= 1;
}

void Stworek::narodziny() {
    cout << "Oto Twoj osobisty, zajebisty stworek. Nadaj mu imie: " << endl;
    cin >> imie;
    cout << "Hmm... mowisz, ze " << imie << " to zajebiste imie? Spoko. A jaki ma kolor?" << endl;
    cin >> kolor;
    cout << "O ja pierdole! " << kolor << " stworek o imieniu " << imie << ". To musi byc niezly skurwiel!" << endl;
}

void Stworek::smierc() {
    cout << "O kurwa ja pierdole! " << imie << " byl taki zajebisty. Ten " << kolor << " stworek byl chrzestnym mojego dziecka, a ty go zajebales." << endl;
    cout << "Niezly z Ciebie funfel. Normalnie dojebany." << endl << endl;
}

void Stworek::pierdolenie() {
    pragnienie -= 1;
    glod -= 1;
}

void Stworek::narodziny_en() {
    cout << "This is your own, precious creature. Give him a name: " << endl;
    cin >> imie;
    cout << "Hmm... you said that " << imie << " is fucking great name? Cool. Pick its colour: " << endl;
    cin >> kolor;
    cout << "Holy fuck! " << kolor << " creature names " << imie << ". It must be a real motherfucker!" << endl;
}

void Stworek::smierc_en() {
    cout << "God daim, holy fuckin' shit! " << imie << " was so fuckin' cool. This " << kolor << " creature was godfather of my child and you killed him." << endl;
    cout << "You are nice motherfucker. Really nice!" << endl << endl;
}