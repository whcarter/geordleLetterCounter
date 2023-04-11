#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    string country; 
    string capital;
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int currentLinePos;
    std::fstream ccfile ("countries-and-capitals.txt");
    ofstream formatedfile ("formated-list.txt");
    while (getline(ccfile, line)) {
        country = "";
        capital = "";
        currentLinePos = 0;
        for (char c : line) {
            //cout << line << "\n";
            //cout << c << "\n";
            if (c == ',') {
                currentLinePos++;
            } else if (alphabet.find(c) != string::npos) {
                string cstring(1, c);
                switch (currentLinePos) {    
                    case 0:
                        country += cstring;
                        break;
                    case 1:
                        capital += cstring;
                        break;
                    default:
                        //
                        
                        break;
                }
            }
        }
        formatedfile << country << "\n";
        formatedfile << capital << "\n";
        cout << country << "\n";
        cout << capital << "\n";
    }
}
