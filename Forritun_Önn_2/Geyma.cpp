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
#include <new>   

using namespace std;
/*****   Classes   *****/

/*****   Main   *****/
int main()
{
    int i,n, x;
    int numbers[20];
    int * p;
        for (int f =0; f <20; f++) {
            x = 101;
            pointer1 = &numbers[f];
            while(x > 100) { 
                x = 1 + std::rand()/((RAND_MAX + 1u)/99); 
                cout << x << ' ';
                *p = x;
            }
        }
    cout << "You have entered: ";
    for (n=0; n<20; n++){
      cout << numbers[n] << ", ";
    delete[] p;
    }
    return 0;
}
  

