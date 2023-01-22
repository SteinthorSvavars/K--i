#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    cout <<"Hvaða gráðum viltu breyta í rads: ";
    cin >>x;
    cout <<"Hérna eru gráðurnar í rads:", (x*3.14/180);
    return 0; 
}
int main() {
    int x;
    cout <<"hvað gráðum viltubreita í rads: ";
    cin >>x;
    cout <<"Hérna eru gráðurnar í rads: ";
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << (x*3.14/180);
    return 0;
}
int main() {
    int c, min, max;
    min = 31;
    max = 256;
    cout << "Settu inn tölu á bilinu 32-255: ";
    cin >> c;
    while (min >= c || c >= max) {
        cout << "Viltaus ASCII kodi";
        cout << "\nSettu inn adra tolu: ";
        cin >> c;
    }
    cout << "ASCII gildi af " << c << " er " << char(c);
    return 0;    
}