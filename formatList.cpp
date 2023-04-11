#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    fstream ccfile ("countries-and-capitals.txt");
    fstream formatedfile ("formated-list.txt");
    while (getline(ccfile, line)) {
        
    }
}