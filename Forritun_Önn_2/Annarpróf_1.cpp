#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<cmath>
#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cctype>
#include<cstdlib>
#include<ctime>  

using namespace std;

/*****   Classes   *****/
class capacitor {
private: 
    string name;                                                
    double cap;                                                
    int volt;                                                   
public:
    capacitor();                                                
    capacitor(string name, double cap, int volt) {}
    void set(string set_name, double set_cap, int set_volt);      
    void get_cap();                                              
    void get_name();                                            
    void get_volt();                                           
};
capacitor::capacitor() {
    name = "C1";
    cap = 0.0;
    volt = 0;
}

int chr_lengd(char* fylki);
void chr_compare(char* p1, char* p2);

/*****   Main   *****/
int main()
{
    int run;
    run = true;
    do {
        int Lidur;
        cout << "\n1 Thettir"; 
        cout << "\n2 Lidur";
        cout << "\n3 Haetta";
        cout << "\n Val er: ";
        cin >> Lidur;
        capacitor Cap;
        string nafn;
        switch (Lidur) {
            case 1:
                int run;
                run = 0;
                char rymd[10];  
                int spennuthol;
                double rymd_heil;
                cout << "\nForritid byr til tilik af thetti og skilgreinir nafn (C$), rymd (F) og spennu (V).";
                cout << "\nHver er rymd thettisins?";
                cin >> rymd;
                cout << "\nHvad er spennuthol thettisins?";
                cin >> spennuthol;
                Cap.set("C1", rymd_heil, spennuthol);
                while (run != 3) {      
                    cout << "\n1: Prenta rymd a skjainn. \n2: Prenta spennuþol. \n3: Haetta.\n\nVal: ";
                    cin >> run;
                    if (run == 1) {
                        cout << "Rymd thettisins er: ";
                        Cap.get_cap();
                    }
                    else if (run == 2) {
                        cout << "Spennuthol thettisins er: ";
                        Cap.get_volt();
                    }
                    else if (run == 3) {
                    }
                    else {
                        cout << "Vinsa mlegast sladu inn tolu a bilinu 1 til 5.\n";
                    }
                }
            case 2:
                char texti_a[100];
                char *ptr1; // Bendir á texti_a
                char texti_b[100];
                char *ptr2; // bendir á texta_B
                ptr1 = texti_a;
                ptr2 = texti_b;
                cout << "Sladu inn texta a: ";
                cin >> texti_a;
                cout << "Sladu inn texta b: ";
                cin >> texti_b;
                cout << "\n";
                chr_compare(ptr1, ptr2);
            case 3:
                run = false;
        }
    } 
    while (run == true);
    return 0;
}
// ********** Fylki **********
void capacitor::set(string set_name, double set_cap, int set_volt) {
    name = set_name;
    cap = set_cap;
    volt = set_volt;
}
void capacitor::get_cap() {
    cout << cap << " F";
}
void capacitor::get_name() {
    cout << name;
}
void capacitor::get_volt() {
    cout << volt << " V";
}

void chr_compare(char* p1, char* p2) {
    int cnt = 0;
    cout << "Eins stafir eru: ";
    for (int i = 0; i < chr_lengd(p1); i++) {
        if (*(p1 + i) == *(p2 + i)) {
            cout << *(p1 + i);
            cnt++;
        }
        else {
            cout << "_";
        }
    }
    cout << "\nHlutfall likra stafa er " << cnt << "/" << chr_lengd(p1) << "\n";
}
int chr_lengd(char* fylki) {
    int count;
    count = 0;

    while (*fylki++) {
        count++;
    }
    return count;
}

