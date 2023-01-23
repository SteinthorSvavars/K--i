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



/*****   Main   *****/
int main()
{
    int run;
    run = true;
    do {
        int Lidur;
        cout << "\n1 Lidur"; 
        cout << "\n2 Lidur";
        cout << "\n3 Lidur";
        cout << "\n4 Haetta";
        cout << "\n Val er: ";
        cin >> Lidur;
        switch (Lidur) {
        case 1:
        case 2:
        case 3:
        case 4:
            run = false;   
        }
    }
    while (run == true);
    return 0;
}
