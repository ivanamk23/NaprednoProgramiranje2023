#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

// definiicija na dtrukturata Covek
struct Covek {
    int redbroj;
    string Ime;
    float poeni;
};

// metod za sporedba na dva zapisi od strukturata Covek po poeni
bool porediPoPoeni(Covek a, Covek b) {
    return a.poeni > b.poeni;
}

int main() {
    // se kreira vektor za chuvanje na strukturnite zapisi
    vector<Covek> lista;

    // se dodavaat zapisi vo vektorot
    Covek covek1 = {1, "Matej", 77.3};
    Covek covek2 = {2, "Ivana", 91.2};
    Covek covek3 = {3, "Stefanija", 51.8};
    lista.push_back(covek1);
    lista.push_back(covek2);
    lista.push_back(covek3);

    // pechatenje na vektorot kako shto e vnesen
    cout << "Vneseni zapisi:" << endl;
    for (Covek c : lista) {
        cout << c.redbroj << " " << c.Ime << " " << c.poeni << endl;
    }

    // se vrshi sortiranje na vektorot po poeni
    sort(lista.begin(), lista.end(), porediPoPoeni);

    // pechatenje na sortiraniot vektor
    cout << "Sortirani zapisi:" << endl;
    for (Covek c : lista) {
        cout << c.redbroj << " " << c.Ime << " " << c.poeni << endl;
    }

    // se zachuvuva vektorot vo fajl
    ofstream izlez("INKI1012.Ivana");
    for (Covek c : lista) {
        izlez << c.redbroj << " " << c.Ime << " " << c.poeni << endl;
    }
    izlez.close();

    return 0;
}
