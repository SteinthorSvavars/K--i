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
    run = 0;
    while (run == 0) {
        int Lidur;
        cout << "\nLidur 1: " ; 
        cout << "\nLidur 2: " ;
        cout << "\nLidur 3: " ;
        cout << "\nHaetta 4: " ;
        cin >> Lidur;
        switch (Lidur) {
        case 1:
        case 2:
        case 3:
        case 4:
            run = 1;   
        }
    }
    return 0;
}
