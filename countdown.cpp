#include "iostream"

using namespace std;

int main() {
    int n;
    cout << "Digite un numero: ";
    cin >> n;
    for (int i = n; i > 0 ; i--)
    {
        cout << i << "\n";
        if (i%5 == 0)
        {
            cout << "Beep\n";
        }
        
    }
    

} // namespace std
