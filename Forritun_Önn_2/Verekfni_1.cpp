#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<cmath>
#include<iostream>
#include<string>
#include<algorithm>
#include<cctype> 

using namespace std;
/*****   Classes   *****/
class Grid{
    private: int x, y;
    public:
        void Grid_Set(int, int);  //Býr til Grid_Set
        void Grid_Write();
        void Grid_Change(int, int); // Býr til Grid_Change
        int Flip(int b, int h) {
            int temp;
            return
            temp = h;
            h = b;
            b = temp;
            }
};
void Grid::Grid_Set (int breidd, int haed){   // Breitir hnitunum
    x = breidd;
    y = haed;
}
/*void Grid::Grid_Change(int h, int b){    // Snýr við hnitunum
    int temp;
    temp = h;
    h = b;
    b = temp;
    }*/

/*****   Main   *****/
int main()
{
    Grid Hnit;    
    int run;
    run = true;
    do {
        int Lidur;
        int a, b;
        cout << "\n1 Skrifa inn Hnit: " ; 
        cout << "\n2 Vixla hnitum: " ;
        cout << "\n3 Haetta: " ;
        cin >> Lidur;
        switch (Lidur) {
        case 1:  // Setur breidd og hæð
            cout << "\nSkrifaðu inn breidd";
            cin >> a;
            cout << "\nSkrifaðu inn hæð";
            cin >> b;
            Hnit.Grid_Set(a, b);
            break;
        case 2:
            cout << "\nHnitin snúinn ";
            cout << Hnit.Flip(a, b);
            break;
        case 3:
            run = false;   
        }
    }
    while (run == true);
    return 0;
}
