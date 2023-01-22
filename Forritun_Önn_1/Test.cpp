// Skilaverkefni 1 í Stýritækni og Forritun
// Halldór Stefán Laxdal

#define _USE_MATH_DEFINES // Svo að visual studio geti notað math.h
#include <iostream>
#include <math.h> // Fyrir pi stuðulinn.
#include <string> // Strengjavinnsla

using namespace std;

// Fallið deg2rad - Breytir gráðum í radíana
double deg2rad(double deg);
   
// Fallið resistor tekur inn char gildi með styttu gildi viðnáms og skilar út heila gildinu
// Getur tekið inn t.d 2k7 eða 2.7k og skilar út 2700
double resistor(char res[]);

int main()
{
    system("cls");
    bool run;
    run = true;
    while (run == true) {
        int daemi;

        cout << "\nVerkefni 1.";
        cout << "\nDaemi 1: Gradur i radiana.\nDaemi 2: Deiling tveggja talna i heiltolu- og afgangshluta";
        cout << "\nDaemi 3: ASCII thydir \nDaemi 4: Giskadu a tolu";
        cout << "\nDaemi 5: Er stafurinn thinn a rettu bili? \nDaemi 6: Hver er aldur thinn?";
        cout << "\nDaemi 7: Einfold reiknivel.\nDaemi 8: Vidnamsgildi vid mismunandi tengingar.";
        cout << "\n\nSladu inn numer a daemi (eda 0 til ad haetta): ";

        cin >> daemi;

        switch (daemi) {
        case 1:
            system("cls");
            // Verkefni 1 
            // Hlutar (a) og (b)

            // Forritið tekur inn gráður (int) og breytir þeim í radíana (double)
            // Í (b) hluta er útgangurinn stilltur þannig að útskriftin takmarkist
            // við tvo aukastafi

            int deg;
            double rad;
            cout << "Forritid breytir gradum i radiana. Sladu inn hornid i gradum: ";
            cin >> deg;
            rad = deg2rad(deg);
            printf("%d gradu horn er %.2f radianar.\n", deg, rad); // (b hluti verkefnis)
            //cout << deg<<" gradu horn er "<<rad<< " radianar."; // (a hluti verkefnis) 
            break;

        case 2:
            system("cls");
            // Verkefni 2

            // Forritið tekur inn tvær heiltölur (int), teljara og nefnara og
            // skilar út heiltöluhlutann og afganginn aðskilinn eftir heiltöludeilingu

            int teljari;
            int nefnari;

            cout << "Skrifadu inn teljara og nefnara og yttu svo a Enter: ";
            cin >> teljari >> nefnari;
            cout << "\nHeiltalan er " << teljari / nefnari << " og afgangurinn er " << (teljari % nefnari) << "/" << nefnari;
            cout << "\nKommutalan er:\t" << (1.0 * teljari) / (1.0 * nefnari); // (b), við margföldum int tölu með 1.0 til að varpa henni í double.
            cout << "\n";
            break;

        case 3:
            system("cls");
            // Verkefni 3

            // Þetta forrit tekur inn ASCII kóða milli 32 og 255 og prentar út þann bókstaf
            // sem kóðinn stendur fyrir.
            // Ef slegið er inn kóði fyrir utan þetta bil, þá biður forritið um kóða innan bilsins.

            int ascii_text;
            cout << "Skrifadu inn ASCII koda: ";
            cin >> ascii_text;

            // Fylgist með ef skrifaður er inn vitlaus kóði og krefst þess að réttur kóði sé sleginn inn
            while (ascii_text < 32 || ascii_text > 255) {
                cout << "Vitlaus ASCII kodi. Vinsamlegast skrifadu koda á milli 32 og 255: ";
                cin >> ascii_text;
            }
            // Þýðir réttan kóða yfir í bókstaf
            cout << "Kodinn sem thu skrifadir inn samsvarar stafnum: " << char(ascii_text)  << "\n\n";

            break;

        case 4:
            system("cls");
            // Verkefni 4

            // Þetta forrit á að biðja notandann um að giska á tölu (100) og prenta út
            // svo hversu oft giskað var á þar til rétt tala var slegin inn.

            int gisk;
            int tilraun;
            int tala;

            gisk = 0; // Tala sem er giskað á
            tilraun = 1; // Fjöldi tilrauna
            tala = 100;  // Talan sem á að finna

            while (gisk != 100)
            {
                cout << "Sladu inn heiltolu: ";
                cin >> gisk;
                if (gisk > tala) {
                    system("cls");
                    cout << "Tala of ha. ";
                    tilraun++;
                }
                else if (gisk < tala) {
                    system("cls");
                    cout << "Tala of lag. ";
                    tilraun++;
                }
            }
            cout << "\nRett tala! Fjoldi tilrauna: " << tilraun << "\n\n";
            break;

        case 5:
        {
            system("cls");
            // Verkefni 5

            // Forrit sem athugar hvort að innsleginn stafur sé milli a og z (þeim meðtöldum) með einni röksegð. 
            // Notandi fær 3 tilraunir til þess að slá inn réttan staf.

            char stafur[26];
            string leyfilegt;

            leyfilegt = "abcdefghijklmnopqrstuvwxyz";  // Stafir a og z sem eru leyfilegir
            tilraun = 2; // Ein tilraun er fyrir utan while lykkjuna til að byrja forritið

            cout << "Sladu inn bokstaf milli a og z: ";
            cin >> stafur;
            while (true) {
                if (leyfilegt.find(stafur) != string::npos)
                {
                    cout << "Stafurinn er a thessu bili! \n\n";
                    break;
                }
                else {
                    if (tilraun == 0)
                    {
                        system("cls");
                        cout << "\nTilraunir bunar. \n\n";
                        break;
                    }
                    tilraun--;
                    cout << "\nStafurinn er ekki a thessu bili. Tilraun: " << tilraun + 1 << " \nSladu inn annan staf: ";
                    cin >> stafur;
                }
            }
        }
        break;
        case 6:
        {
            system("cls");
            // Verkefni 6
            // Notandi slær inn aldur og forritið svarar með viðeigandi skilaboðum.
            int aldur;
            cout << "Skrifadu aldur thinn: ";
            cin >> aldur;
            if (aldur < 13) {
                cout << "Thu ert barn!\n\n";
            }
            else if (aldur >= 13 && aldur <= 19) {
                cout << "Thu ert taningur.\n\n";
            }
            else if (aldur >= 67) {
                cout << "Thu ert eldri borgari. Njottu aefikvoldsins.\n\n";
            }
            else {
                cout << "Thu ert fullordinn.\n\n";
            }
        }
        break;


        case 7:
        {
            system("cls");
            // Verkefni 7
            // Einföld heiltölureiknivél. 
            // Forritið tekur fyrst inn heiltölu, svo reiknitákn og að lokum seinni heiltöluna.
            // Lögleg reiknitákn eru: +, -, * eða / 
            int A;
            int B;
            char op;

            cout << "Sladu inn tolu A: ";
            cin >> A;
            cout << "Sladu inn tolu B: ";
            cin >> B;
            cout << "Sladu inn reikniadgerd sem a ad framkvaema: ";
            cin >> op;

            // Athuga hvort reikniaðgerð sé lögleg á mjög boring máta.
            while (op != '+' && op != '-' && op != '*' && op != '/') {
                cout << "Reikniadgerd er ekki rett. Vinsamlegast sladu inn retta reikniadgerd: ";
                cin >> op;
            }

            // Vörpum reikniaðgerðinni úr char yfir í int tölu sem fer betur inn í case
            int ascii_op = op;

            switch (ascii_op)
            {
            case 43: // +
                cout << "Samlagning: ";
                cout << A << " + " << B << " = " << (A + B) << "\n\n";
                break;
            case 45: // -
                cout << "Fradrattur: ";
                cout << A << " - " << B << " = " << (A - B) << "\n\n";
                break;
            case 42: // *
                cout << "Margfoldun: ";
                cout << A << " * " << B << " = " << (A * B) << "\n\n";
                break;
            case 47: // /
                cout << "Deiling: ";
                cout << A << " / " << B << " = " << (A / B) << " " << (A % B) << "/" << B;
                cout << "\nKommutalan er: " << (1.0 * A) / (1.0 * B) << "\n\n"; // (b)
                break;
            }
        }
        break;

        case 8:
        {
            system("cls");
            // Verkefni 8:
            // Reiknivél sem reiknar út heildarviðnám tveggja viðnáma í rað- eða hliðtengingu eftir ósk notanda. 
            // Hægt er að keyra mörgum sinnum.

            // Styðst við fallið resistor sem tryggir það að öll viðnámsgildi séu gild. Tekur inn viðnámsgildi á formunum:
            // t.d 2700, 2.7k og 2k7 og les þau öll á sama hátt.
            char res1[10];
            char res2[10];
            double R1;
            double R2;

            double Rtotal;

            char tenging;

            char cont;// halda áfram eða ekki
            cont = 'j'; // Byrja með stillt í tómt til að keyra forritið

            while (cont != 'n' && cont != 'N') {
                cout << "Sladu a 'r' fyrir radtengingu eda 'h' fyrir hlidtengingu: ";
                cin >> tenging;

                while (tenging != 'r' && tenging != 'h')
                {
                    cout << "Vinsamlegast sladu inn annadhvort litid 'r' eda litid 'h': ";
                    cin >> tenging;
                }

                int ascii_tenging = tenging;
                cout << "Sladu inn gildi vidnams R1 [Ohm]: ";
                cin >> res1;
                R1 = resistor(res1);

                cout << "Sladu inn gildi vidnams R2 [Ohm]: ";
                cin >> res2;
                R2 = resistor(res2);

                switch (ascii_tenging) { // r = 114, h = 104 
                case 114: // Radtenging
                    Rtotal = R1 + R2;
                    break;
                case 104: // Hlidtenging
                    Rtotal = (R1 * R2) / (R1 + R2);
                    break;
                }

                cout << "Heildarvidnamid er " << Rtotal << " Ohm.";

                cout << "\n\nViltu halda afram ad reikna vidnam? (j/J til ad halda afram. n/N til ad haetta): ";
                cin >> cont;

                while (cont != 'j' && cont != 'J' && cont != 'n' && cont != 'N')
                {
                    cout << "\nVinsamlegast sladu annad hvort j/J til ad halda afram, eda n/N til ad haetta: ";
                    cin >> cont;
                }
            }

        }
        break;
        case 0:
            return 0;
            break;
        }
    }
}

// Föll!

double deg2rad(double deg)
{
    double rad;
    rad = deg * (M_PI / 180);
    return rad;
}

double resistor(char res[]) 
{
    string res_value;   // Skrá heildargildi viðnámsins með kommu ef á við
    double res_val_d;   // Lokagildi viðnáms
    double mult;        // Margföldunarstuðull frá k (K) eða M.
    mult = 1.0;         // Default ef engin margföldun finnst
    for (int i = 0; i < 10; i++)
    {
        int res_ascii = res[i];
        if (res[i] >= 48 && res[i] <= 57) // Les inn tölu og athugar að sé tala
        {
            res_value += res[i];
        }
        else if (res_ascii == 46) // Athugar eftir punkti. x.x eða sambærilegt. Er ekki nauðsynlegt í innslætti
        {
            res_value += res[i];
        }
        else if (res_ascii == 75 || res_ascii == 107) // Kíkir eftir k eða K og skráir margfaldarann sem 1000.
        {
            res_value += '.';
            mult = 1000.0;
        }
        else if (res_ascii == 77) // Kíkir eftir M fyrir mega
        {
            res_value += '.';
            mult = 1000000.0;
        }
        // Hægt er að bæta við fleiri margföldurum
    }
    // Margfalda saman gildi viðnáms og margfaldara.
    res_val_d = stod(res_value) * mult;
    return res_val_d;
}