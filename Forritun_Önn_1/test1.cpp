#include <iostream>
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
int main()
{	
	string message;
	cout << "Input the message would u like to encode" << endl;
	getline(cin >> ws, message);
    code(message);
}
