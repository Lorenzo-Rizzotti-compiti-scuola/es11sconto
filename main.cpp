#include <iostream>

using namespace std;

int main() {
    float prezzo, sconto;
    cout << "Inserire spesa totale non scontata: ";
    cin >> prezzo;

    //Operatore ternario
    sconto = prezzo * (prezzo < 500 ? 10 : 20) / 100;

    cout << "Lo sconto è di " << sconto << "€" << endl;
    cout << "Il prezzo con lo sconto applicato è di " << prezzo - sconto << "€";
    return 0;
}
