#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    enum BrojDen { ponedelnik, vtornik, sreda, cetvrtok, petok, celosen };
    BrojDen brden = celosen;
    int izbor;

    cout << "Izberete opcija: \n1 - Izbor na eden den od nedelata\n2 - Celosen raspored\n";
    cin >> izbor;

    switch (izbor) {
    case 1:
        cout << "Izberete den: \n1 - Ponedelnik\n2 - Vtornik\n3 - Sreda\n4 - Cetvrtok\n5 - Petok\n";
        int den;
        cin >> den;

        switch (den) {
        case 1:
            cout << "Raspored ponedelnik\n";
            break;
        case 2:
            cout << "Raspored vtornik\n";
            break;
        case 3:
            cout << "Raspored sreda\n";
            break;
        case 4:
            cout << "Raspored cetvrtok\n";
            break;
        case 5:
            cout << "Raspored petok\n";
            break;
        case 6:
        default:
            cout << "Vnesovte pogresen broj!\n";
            break;
        }
        break;

    case 2:
        cout << "Celosen raspored\n";
        cout << "Ponedelnik - ...\n";
        cout << "Vtornik - ...\n";
        cout << "Sreda - ...\n";
        cout << "Cetvrtok - ...\n";
        cout << "Petok - ...\n";
        break;

    default:
        cout << "Vnesovte pogresen broj!\n";
        break;
    }

    return 0;
}