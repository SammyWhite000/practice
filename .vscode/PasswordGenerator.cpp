#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <time.h>

using namespace std;

//fill different list with special characters
    list<char> listOfUndercase({'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w', 'x', 'y', 'z'});
    list<char> listOfUppercase({'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W', 'X', 'Y', 'Z'});
    list<char> listOfIntegers({'1','2','3','4','5','6','7','8','9','0'});
    list<char> listOfSpecialCharacters({'!','@','#','$','%','^','&','*'});

string getPassword(int lengthOfPassword){
    int listChoice;
    string password = "";
    int numberIterator = 0;

    srand(time(NULL));
    while(numberIterator < lengthOfPassword){
        cin >> listChoice;

        //listChoice = rand() % 4 + 1;
        switch(listChoice){
            case 1:
                auto upperCaseListFront = listOfUppercase.begin();
                int listUnder = rand() % 26 + 1;
                advance(upperCaseListFront, listUnder);
                password += *upperCaseListFront;
                break;
            //case 2:
            //case 3:
            // ase 4:
        }
        numberIterator++;
    }
    
    
    return password;
}
int main(){

    

    //get length of password
    
    int lengthOfPassword;
    cout << "Enter length of password" << endl;
    cin >> lengthOfPassword;
    cout << endl;
    cout << getPassword(lengthOfPassword) << endl;
    
 
 
    return 0;

}