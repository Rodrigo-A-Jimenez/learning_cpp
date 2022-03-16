#include "iostream"

using namespace std;
int main() {
    int pasagers;
    cout << "Cuantos pasajeros esperan?: \n";
    cin >> pasagers;
    int asientos_vacios = (50 - pasagers%50);
    cout << asientos_vacios;
}
