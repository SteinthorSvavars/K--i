#include <iostream>
#include<ctype.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int run;
    run = 0;
    while (run == 0) { // While lykkja til þess að halda forritinu gangandi og til þess að það sé hægt að velja um lið
        int Lidur;

        cout << "\nLidur 1: " ; 
        cout << "\nLidur 2: " ;
        cout << "\nLidur 3: " ;
        cout << "\nHaetta 4: " ;
        cin >> Lidur;

        switch (Lidur) {
        case 1:
                int kennitala, old;

                cout << "Skrifaðu inn kennitölu án bandstriks";
                cin >> kennitala;
                old = kennitala % 10; // skilgreinir old sem seinasti stafur kennitölunar
                if (old != 0) {
                    cout << "Þú ert fæddur á 20 öldinni"; // prentar út ef 0ld er ekki sama sem 0
                }
                else{
                    cout << "Þú ert fæddur á 21 öldinni";  //prentar út ef old er sama sem 0
                }
                break;
        case 2:
                char codi; //skilgreinir codi sem char
                int acsii_codi; // skilgreinir acsii_codi sem int
                cout << "Skrifaðu inn tákn";
                cin >> codi;
                acsii_codi = int(codi); //breitir char yfir í acsii
                if (acsii_codi >= 42 && acsii_codi <= 46){ //tjékkar hvort innsláturinn sé reikningstákn
                    cout << "Innsláttur er reiknistákn"; // prentar ef reikningstákn
                }
                else {
                    cout << "Innsláttur er ekki reiknistákn"; // prentar ef ekki reikningstákn
                }
                break;
        case 3:
                int keyra;
                keyra = 0;
                int reikningur;
                while (keyra == 0)  //lykkja til að halda gangandi og gera kleift til að gera valm-guleika
                {
                    cout << "\n 1 Hnútar í Km/klst ";
                    cout << "\n 2 Km/klst í Hnúta ";
                    cout << "\n 3 Til að hætta \n";
                    cin >> reikningur;
                    switch (reikningur)
                    {
                    case 1:
                        double Hnutar;
                        cout << "\nHvaða Hnúta ertu með: ";
                        cin >> Hnutar;
                        cout << Hnutar <<"Hnútar Í Km/klst \ner " << (int)(Hnutar*1.85+0.5) << "Km/klst"; //+ 0,5 til þess að það námundast að réttu heiltölu
                        break;
                    case 2:
                        double Km;
                        cout << "\nHvaða Km/klst ertu með: ";
                        cin >> Km;
                        cout << Km <<"Km/klst Í Hnútum \ner " << (int)(Km*0.54+0.5) << "Hnútar"; //+0,5 til þess að það námundast að réttu heiltölu
                        break;
                    case 3:
                        keyra = 1;
                        break;
                    }
                }
            break;
        case 4:
            run = 1;
            
        }
    }
    return 0;
}
