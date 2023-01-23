#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<cmath>
#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cctype>  

using namespace std;
/*****   Classes   *****/
class Kassi{
    private: int lengd, breidd, haed;
    public:
        void BoxSet(int, int, int);
        int getVolume() {return lengd*breidd*haed;}
        int getArea() {return lengd*breidd;}
};
void Kassi::BoxSet(int a, int b, int c){
    lengd = a;
    breidd = b;
    haed = c;
}

/*****   Main   *****/
int main()
{
    Kassi Box;
    int run;
    run = true;
    int x, y, z;
    do {
        int Lidur;
        cout << "\n1 Kassi: "; 
        cout << "\n2 Haetta: ";
        cout << "\n Hvad viltu gera? ";
        cin >> Lidur;
        switch (Lidur) {
        case 1:
            cout << "\nHvad er lengd? ";
            cin >> x;
            cout << "\nHvad er breiddin? ";
            cin >> y;
            cout << "\nHvad er haedin";
            cin >> z;
            Box.BoxSet(x,y,z);
            if (z > 0) {
                cout << "\nRummal kassans er " << Box.getVolume();
            }
            else {
                cout << "Thad var ekki haegt ad reikna rummalid";
            }
            cout << "\nFlatarmal kassans er " << Box.getArea();
            break;
        case 2:
            run = false;
        }
    }
    while (run == true);
    return 0;
}            
