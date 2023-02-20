// STTÆ B - Lotupróf 1 - Dæmi 2
// Halldór Stefán Laxdal
// Forrit sem býr til tvö char-fylki og ber þau saman í sér falli með bendum. Forritið skilar út hvort að þessi tvö fylki séu eins.

#include <iostream>
using namespace std;


int chr_lengd(char* fylki);
void chr_compare(char* p1, char* p2);

int main()
{
    // Tekur inn stafafylki, max 100 stafir
    char texti_a[100];
    char *ptr1; // Bendir á texti_a
    char texti_b[100];
    char *ptr2; // bendir á texta_B

    ptr1 = texti_a;
    ptr2 = texti_b;

    cout << "Sladu inn texta a: ";
    cin >> texti_a;
    cout << "Sladu inn texta b: ";
    cin >> texti_b;
    cout << "\n";

    chr_compare(ptr1, ptr2);
}

void chr_compare(char* p1, char* p2) {
    int cnt = 0;
    cout << "Eins stafir eru: ";
    for (int i = 0; i < chr_lengd(p1); i++) {
        // cout << "Stafur " << i << ":  " << (*(p1 + i) == *(p2 + i)) << "\n";
        if (*(p1 + i) == *(p2 + i)) {
            cout << *(p1 + i);
            cnt++;
        }
        else {
            cout << "_";
        }
    }
    cout << "\nHlutfall likra stafa er " << cnt << "/" << chr_lengd(p1) << "\n";
}

// Forrit sem reiknar lengd á chr fylkjum
int chr_lengd(char* fylki) {
    int count;
    count = 0;

    while (*fylki++) {
        count++;
    }
    return count;
}