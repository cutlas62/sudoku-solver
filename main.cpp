#include <cstdio>
#include <iostream>
#include <fstream>

#include <string>

using namespace std;

char grid [9][9];

void clearGrid (void) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = 1;
        }
    }
}

void populateGrid (void) {
    ifstream inFile("in/example.txt");
    string tmp;
    int i = 0;
    while(getline(inFile, tmp)) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = tmp[j];
        }
        i++;
    }
    inFile.close();
}

void printGrid (void) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    clearGrid();
    populateGrid();
    printGrid();

    return 0;
}