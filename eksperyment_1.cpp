#include <iostream>
#include "stworek.h"
#include <stdlib.h>
#include <windows.h>

using namespace std;
int wybor_menu_1;
int wybor_menu_2;
int wybor_jezyka;

int main() {
// WYBÓR JĘZYKA
    cout << "------LANGUAGE------" << endl;
    cout << "1. English\t2. Polski" << endl;
    cin >> wybor_jezyka; cout << endl;
    while(cin.fail() || wybor_jezyka > 2)
            {
            cout << "Choose correct option!" << endl;
         
            cin.clear();
            cin.ignore(1000,'\n');
            cin >> wybor_jezyka;
            }

    switch (wybor_jezyka) {
//WERSJA POLSKA
        case 2:{

            do {
                Stworek s1;

//TWORZENIE WŁASNEGO STWORKA
                cout << "1. Stworz swojego stworka." << endl;
                cout << "2. Wyjdz z gry" << endl;
                do {
                    cin >> wybor_menu_1;
                    while(cin.fail())
                    {
                        cout << "Wybierz odpowiednia opcje" << endl;
         
                        cin.clear();
                        cin.ignore(1000,'\n');
                        cin >> wybor_menu_1;
                     }
                    switch(wybor_menu_1) {
                        case 1:{
                            s1.narodziny();
                        break; }

                        case 2:
                            exit(0);
                        break;

                        default:
                            cout << "Wybierz odpowiednia opcje" << endl;
                        break;
                    }
                } while(wybor_menu_1 != 1);

                while (s1.glod > 0 || s1.pragnienie > 0) {
                    cout << "Imie Twojego stworka: " << s1.imie << endl;
                    cout << "Kolor Twojego stworka: " << s1.kolor << endl;
                    cout << "Poziom najedzenia: " << s1.glod << endl;
                    cout << "Poziom napojenia: " << s1.pragnienie << endl << endl;

                    cout << "CO CHCESZ ZROBIC?" << endl << endl;
                    cout << "1. Daj mu jesc!" << endl;
                    cout << "2. Daj mu pic!" << endl;
                    cout << "3. Pierdol go!" << endl;
                    cout << "4. Wyjdz z gry." << endl;

            
            
                    do {
                        cin >> wybor_menu_2;
                        while(cin.fail())
                        {
                            cout << "Wybierz odpowiednia opcje" << endl;
         
                            cin.clear();
                            cin.ignore(1000,'\n');
                            cin >> wybor_menu_2;
                        }
                        switch (wybor_menu_2) {
                            case 1:
                                cout << endl << "Dales stworkowi jesc, ale chce mu sie pic!" << endl << endl;
                                s1.karmienie();
                                Sleep(1000);
                            break;

                            case 2:
                                cout << endl << "Dales stworkowi pic, ale teraz chce mu sie jesc" << endl << endl;
                                s1.picie();
                                Sleep(1000);
                            break;

                            case 3:
                                cout << endl << "Masz racje, pierdol go. To tylko zywy stworek z krwii i kosci, poradzi sobie sam." << endl << endl;
                                s1.pierdolenie();
                                Sleep(1000);
                            break;

                            case 4:
                                exit(0);
                            break;

                            default:
                                cout << "Wybierz odpowiednia opcje" << endl;
                        }
                    } while (wybor_menu_2 > 4);
                        if (s1.glod <= 0) {
                        s1.smierc();
                        Sleep(10000);
                    } else if (s1.pragnienie <= 0) {
                        s1.smierc();
                        Sleep(10000);
                    }
                }
            } while (wybor_menu_2 != 4);
        break;}

        case 1: {
//WERSJA ANGIELSKA
            do {
                Stworek s1;
                cout << "1. Create your own creature." << endl;
                cout << "2. Exit." << endl;
                do {
                    cin >> wybor_menu_1;
                    while(cin.fail()) {
                        cout << "Choose correct option!" << endl;
         
                        cin.clear();
                        cin.ignore(1000,'\n');
                        cin >> wybor_menu_1;
                    }
                    switch(wybor_menu_1) {
                        case 1:{
                            s1.narodziny_en();
                        break; }

                        case 2:
                            exit(0);
                        break;

                        default:
                            cout << "Choose correct option!" << endl;
                        break;
                    }
                } while(wybor_menu_1 != 1);
    
//----------------------------------------------------------
//JEŚLI STWOREK JEST STWORZONY, DZIEJE SIĘ TO

                while (s1.glod > 0 || s1.pragnienie > 0) {
                    cout << "Creatures name: " << s1.imie << endl;
                    cout << "Creatures color: " << s1.kolor << endl;
                    cout << "Hunger: " << s1.glod << endl;
                    cout << "Thirst: " << s1.pragnienie << endl << endl;

                    cout << "WHAT DO YOU WANT TO DO?" << endl << endl;
                    cout << "1. Give him food!" << endl;
                    cout << "2. Give him drink!" << endl;
                    cout << "3. Fuck him!" << endl;
                    cout << "4. Exit" << endl;

            
            
                    do {
                        cin >> wybor_menu_2;
                        while(cin.fail())
                        {
                            cout << "Choose correct option!" << endl;
         
                            cin.clear();
                            cin.ignore(1000,'\n');
                            cin >> wybor_menu_2;
                        }
                        switch (wybor_menu_2) {

                            case 1:
                                cout << endl << "You gave him food, but now he is thirsty!" << endl << endl;
                                s1.karmienie();
                                Sleep(1000);
                            break;

                            case 2:
                                cout << endl << "You gave him drink, but now he is hungry. " << endl << endl;
                                s1.picie();
                                Sleep(1000);
                            break;

                            case 3:
                                cout << endl << "Yeah, of course, fuck him!. It's only living being from skull and bones, it can handle it itself!" << endl << endl;
                                s1.pierdolenie();
                                Sleep(1000);
                            break;

                            case 4:
                                exit(0);
                            break;
                
                            default:
                                cout << "Choose correct option!" << endl;
                            }
            
                    } while (wybor_menu_2 > 4);
                        if (s1.glod <= 0) {
                            s1.smierc_en();
                            Sleep(10000);
                        } else if (s1.pragnienie <= 0) {
                            s1.smierc_en();
                            Sleep(10000);
                        }           

                }
            } while (wybor_menu_2 != 4);
        break;}

        default:
            cout << "Choose correct option!" << endl;;
    }
return 0;
}
  
    
