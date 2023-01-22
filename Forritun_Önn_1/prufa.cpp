#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<cmath>
#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int run = 0;
    while (run == 0) {
        int Lidur;
        cout << "\nLidur 1: "; 
        cout << "\nLidur 2: ";
        cout << "\nLidur 3: ";
        cout << "\nLidur 4: ";
        cout << "\nHaetta 5: ";
        cin >> Lidur;
        switch (Lidur) {
            case 1:
            int start = 0;
            while(start == 0){
                int val;
                cout << "\nLidur 1: ";  // Lidur A
                cout << "\nLidur 2: ";  // Lidur B
                switch(val) {
                    case 1:{
                        int main(){ // Byrjun á lid A
                            int sum = 0;
                            int tala[5];
                            cout << "Srifadu inn fimm tolustafi";
                            for(int i = 0; i<5; i++){
                                int num;
                                cout << "\ntolustafur: ";
                                cin >> num;
                                tala[i] = num;
                            }
                            for(int i = 0; i<5; i++){
                                sum += tala[i];
                            }
                            cout << "\nSumma talnan er: ";
                            cout << sum;
                        }
                    }
                    break;
                    case 2: {
                        int main() { // Byrjun á lid B
                            int magn,sum,ave;
                            cout << "Hersu marg ar tölur eiga að vera í fylkinu: ";
                            cin >> magn;
                            int size = magn;
                            int tala[size];
                            cout << "Srifadu inn", magn, "tolustafi";
                            for(int i = 0; i<magn; i++){
                                int num;
                                cout << "\ntolustafur: ";
                                cin >> num;
                                tala[i] = num;
                            }
                            for(int i = 0; i<magn; i++){
                                sum += tala[i];
                            }
                            ave = sum / magn; //Lidur C
                            cout << "\nMedaltal talnana er: " << ave;
                        }
                    }
                    break;
                    case 3: {
                        start = 1;
                    }
                    break;
                }
            }
            break;
        }
    }
}