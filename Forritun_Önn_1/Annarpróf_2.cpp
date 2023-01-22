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

int code(string message){
    transform(message.begin(), message.end(), message.begin(), [](int c){ if (isalpha(c) && (c = tolower(c)) && (c += 13) && c > 'z') c -= 26; return c; });
	cout << message << endl;
	transform(message.begin(), message.end(), message.begin(), [](int c){ if (isalpha(c) && (c = tolower(c)) && (c -= 13) && c < 'a') c += 26; return c; });
	cout << message << endl;
    return 0;
}
int teljari(string str) {
    int sum = 0;
    for (int i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= char(48)) && (str[i] <= char(57))) {
            sum = sum + 1; 
        }
    }
    return sum;
}



int main()
{
    int run;
    run = 0;
    while (run == 0) {
        int Lidur;
        cout << "\nLidur 1: " ; 
        cout << "\nLidur 2: " ;
        cout << "\nHætta 3: " ;
        cout << "\nVal er: ";
        cin >> Lidur;
        switch (Lidur) {
       case 1: {
            string message;
	        cout << "Input the message would u like to encode" << endl;
	        getline(cin >> ws, message);
            code(message);
        }
        break;
        case 2: {
            string str;
            cout << "\nSkrifaður eitthvað: ";
            getline(cin >> ws, str);
            cout << "\nFjöldi talna í textanum er: " << teljari(str) << endl;
            }
            break;
        case 3: {
            run = 1;
            }
            break;    
        return 0;
        }
    }
}