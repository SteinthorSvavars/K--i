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
    private: int lengd, breidd;
    public:
        void BoxSet(int, int);
        int getVolume() {return (lengd*breidd)^2;}
        int getArea() {return lengd*breidd;}
};
void Kassi::BoxSet(int a, int b){
    lengd = a;
    breidd = b;
}

/*****   Main   *****/
int main()
{
    int run;
    run = true;
    Kassi Box;
    do {
        int Lidur;
        cout << "\n1 Setja in tolur: " ; 
        cout << "\n2 Rummal: " ;
        cout << "\n3 Flatarmal: " ;
        cout << "\n4 Haetta: " ;
        cout << "\n Val er: ";
        cin >> Lidur;
        switch (Lidur) {
        case 1:
            int x, y;
            cout << "Hvad er lengd? ";
            cin >> x;
            cout << "Hvad er breiddin? ";
            cin >> y;
            Box.BoxSet(x,y);
            break;
        case 2:
            cout << "Rummal kassans er " << Box.getVolume();
            break;
        case 3:
            cout << "Flatarmal kassans er " << Box.getArea();
            break;
        case 4:
            run = false;   
        }
    }
    while (run == false);
    return 0;
}
