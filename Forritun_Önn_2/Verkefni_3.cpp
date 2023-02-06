#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <new>  

using namespace std;
/*****   Classes   *****/



/*****   Main   *****/
int main()
{
    int x;
    int fylki1[20], fylki2[20];
    int * pointer1;
    cout << "\nTolurnar i fylki1 eru: ";
    for (int f =0; f <20; f++) {    
            x = 101;
            while(x > 100) { 
                x = 1 + std::rand()/((RAND_MAX + 1u)/99); 
                cout << x << ' ';   
            }
            fylki1[f] = x;
    }
    for (int f =0; f <20; f++) { 
        pointer1 = &fylki2[f];
        *pointer1 = fylki1[f];
    }
    cout << "\nTolurnar i fylki2 eru: ";
    cout <<"";
    for (int f =0; f <20; f++){
        cout << fylki2[f] << " ";
    }
    return 0;
}
