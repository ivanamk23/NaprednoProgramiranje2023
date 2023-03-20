#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
const int DECK_SIZE = 54;
const int SUIT_SIZE = 13;
string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
string joker = "Joker";
void shuffleDeck(string deck[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}
int main() {
    string deck[DECK_SIZE];
    int index = 0;
    //se kreira paluba od karti
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < SUIT_SIZE; j++) {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
        }
    }
    //se dodavaat jokeri na palubata
    deck[52] = joker;
    deck[53] = joker;
    srand(time(NULL)); //(seme)generator na sluchaen broj
    //pechati neizmeshana paluba
    cout << "Unshuffled Deck:" << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i] << endl;
    }
    //meshanje na palubata
    shuffleDeck(deck, DECK_SIZE);
    //pechati meshana paluba
    cout << "\nShuffled Deck:" << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i] << endl;
    }
    return 0;
}