
#include <iostream>
using namespace std;

int chr_lengd(char* fylki);
void encode(char* fylki);

int main()
{
    char text[100];
    cout << "\nSkrifadu texta: ";
    cin.get(text, 100);
    encode(text);
}

void encode(char* fylki) {  
    char Text2[300]; 
    int count;
    count = 0;
    char samh[] = "aAeEiIuU";
    for(int i = 0; i < chr_lengd(fylki); i++) {
        for(int j = 0; j < 9; j++) {
            if (fylki[i] == samh[j]){
                Text2[count] = fylki[i];
                Text2[count+1] = 'p';
                Text2[count+2] = fylki[i];
                count += 2;
            } else {
                Text2[count] = fylki[i];
            }
        }
        count++;
    } 
    cout << Text2;
}
int chr_lengd(char* fylki) {
    int count;
    count = 0;
    while (*fylki++) {
        count++;
    }
    return count;
}