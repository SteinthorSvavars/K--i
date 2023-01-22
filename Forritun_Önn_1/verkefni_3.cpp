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

using namespace std;

int hamark(int x, int y) {
        if(x < y){
            return y;
        }
        else if(x > y) {
            return x;
        }
        else if(x == y){ 
            return 0;
        }
}
int halupar(int x){
    if(x / 400)
}

int main(){
    
    int start;
    start = true;
    while (start == true)
    {
        int x, y;
        cout << "\nSkrifadu inn tvær tölur";
        cout <<"\nTala 1: ";
        cin >> x;
        cout <<"\nTala 2: ";
        cin >> y;
        cout << hamark(x, y);
        if (hamark(x,y) == 0){
            cout << "\nTölurnar eru jafn stórar";
            start = false;
        }
    }

}
