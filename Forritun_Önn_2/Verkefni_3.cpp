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
#include <cstdlib>
#include <ctime>  

using namespace std;
/*****   Classes   *****/



/*****   Main   *****/
int main()
{
    int tala[20];
    int x;
    for (int f=0; f != 20; f++) {
        x = 101;
        while(x > 100) 
            x = 1 + std::rand()/((RAND_MAX + 1u)/99);  
        std::cout << x << ' ';
        tala[f] = x;
    }
    for(int a = 1; a = 20; a++) {
        std::cout << tala[a] << " ";
    }
    return 0;
}
