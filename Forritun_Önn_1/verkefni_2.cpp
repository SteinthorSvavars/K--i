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

int main()
{
    int run = 0;
    while (run == 0) {
        int Lidur;
        cout << "\nLidur 1: "; 
        cout << "\nLidur 2: ";
        cout << "\nLidur 3: ";
        cout << "\nLidur 4: ";
        cout << "\nHaetta 5: ";
        cout << "\nVal: ";
        cin >> Lidur;
        switch (Lidur) {
        case 1:
            int start;
            start = 0;
            while(start == 0){
                int val;
                cout << "\nLidur 1: ";  // Lidur A
                cout << "\nLidur 2: ";  // Lidur B
                cout << "\nHætta 3: ";
                cout << "\nVal: ";
                cin >> val;
                switch(val) {
                    case 1: {
                             // Byrjun á lid A
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
                    break;
                    case 2: {
                            // Byrjun á lid B
                            int magn,sum,ave;
                            cout << "Hersu marg ar tölur eiga að vera í fylkinu: ";
                            cin >> magn;
                            int size;
                            size = magn;
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
                            cout << "\nSumma talnana er: " << sum;
                            ave = sum / magn; //Lidur C
                            cout << "\nMedaltal talnana er: " << ave;
                    }
                    break;
                    case 3: {
                        start = 1;
                    }
                    break;
                }
            }
            break;
        case 2: {
                int tala1[15], tala2[15],v1, v2;
                for(int i = 0; i<15; i++){
                    v1 = rand() % 100;
                    tala1[i]= v1;
                    v2 = rand() % 100;
                    tala2[i] = v2;
                }
                cout << "\nFylki1: ";
                for(int i = 0; i < 15; i++){
                    cout << tala1[i] << " ";
                }
                cout << "\nFylki2: ";
                for(int i = 0; i < 15; i++){
                    cout << tala2[i] << " ";
                }
                cout << "\nSumma talna: ";
                int sum[15];
                for(int i=0; i<15; i++){
                    sum[i] = tala1[i] + tala2[i];
                    cout << sum[i] << " ";
                }
                int n;
                sizeof(sum) / sizeof(sum[0]);
                sort(sum, sum + n);
                cout << "\nTolunum radad eftir staerd: ";
                for (int i = 0; i < n; ++i)
                    cout << sum[i] << " ";
                }
                break;
        case 3: {//lidur 3
                char ord[200];
                cout << "Skrifadu in ord (max 200 stafir): ";
                cin.getline(ord, 200);
                if(strlen(ord) == 0){
                    cout << "Skrifadu eitthvad";
                    cin.getline(ord, 200);
                }
                else if(strlen(ord) > 200){
                    cout << "allt of morg ord gerdu aftur (max 200 stafir): ";
                    cin.getline(ord, 200);
                }
                int teljari;
                teljari = 1;
                for(int i = 0; i < 200 && ord[i]!='\0' ; i++){
                    if(ord[i] == ' '){
                        teljari = teljari +1;
                    }
                }
                cout << "magn ordana er " << teljari; 
                }          
                break;
        case 4:  {//Lidur 4
                int xsize;
                cout << "Hversu stort a xid ad vera? (max 20): ";
                cin >> xsize;
                while(xsize > 20){
                    cout << "Xid er of stort veldu aftur (max 20): ";
                    cin >> xsize;
                }
                char fylkix[20][20];
                for(int x = 0; x < 20; x++){
                    for(int y = 0; y < 20; y++){
                        fylkix[x][y] = ' ';
                    }
                }
                for(int i = 0; i < 20; i++){
                    for(int j = 0; j < 20; j++){
                        if (j == i || j == (xsize - 1 - i)){
                            fylkix[i][j] = '*';
                        }
                    }
                }
                cout << "\n";
                for(int y = 0; y < xsize; y++){
                    for(int x =0; x < xsize; x++){
                        cout << fylkix[x][y];
                    }
                    cout << "\n";
                }
                cout << "\n";
            }
            break;
        case 5:{ 
            run = 1;
        } 
            break;  
    
    }
    return 0;
}
}
