#include <iostream>
using namespace std;

//Array to hold the 7 pieces
wstring tetromino[7];

int fieldWidth = 12;
int fieldHeight = 18;
unsigned char *pField = nullptr;

int Rotate(int px, int py, int r){
    switch(r % 4){
        case 0: return py * 4 + px;         //0 degrees
        case 1: return 12 + py - (px * 4);  //90 degrees
        case 2: return 15 - (py * 4) - px;  //180 degrees
        case 3: return 3 - py + (px * 4);   //270 degrees
    }
    return 0;
}

int main(){
    //Create assets
    //Dots = empty space while letters = taken
    //It will be a 4x4 canvas to make pieces
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    tetromino[2].append(L".X..");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"..X.");
    tetromino[2].append(L"....");

    tetromino[3].append(L"..X.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"..X.");
    tetromino[3].append(L"....");

    tetromino[4].append(L"....");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"....");

    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..XX");

    tetromino[6].append(L"..X.");
    tetromino[6].append(L"..X.");
    tetromino[6].append(L"..X.");
    tetromino[6].append(L".XX.");
    
    // 0  1  2  3
    // 4  5  6  7
    // 8  9  10 11
    // 12 13 14 15

    //to calculate where an index is stored in memory use 
    // i = y * w + x
    //If we switch 90 degrees
    //i = 12 + y - (x * 4)
    //180 = i = 15 - (y * 4)
    //270 = i = 3 + y + (x * 4)

    //Create the field
    pField = new unsigned char[fieldHeight * fieldWidth];
    for(int x = 0; x < fieldWidth; x++){    //boundary boarder
        for(int y = 0; y < fieldHeight; y++){
            pField[y*fieldWidth + x] = ((x == 0) || (x == fieldWidth - 1) || (y = fieldHeight - 1))? 9 : 0;
        }
    }
    return 0;
}