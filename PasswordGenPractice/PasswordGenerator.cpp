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

string getPassword(bool questionUpperCase, bool questionLowerCase, bool questionIntegers, bool questionSpecialint, int lengthOfPassword){
    
    string password = "";
    int numberIterator = 0;

    srand(time(NULL));
    while(numberIterator < lengthOfPassword){
        if(questionUpperCase == true){
            auto upperCaseListFront = listOfUppercase.begin();
            int listUpper= rand() % 26 + 1;
            advance(upperCaseListFront, listUpper);
            password += *upperCaseListFront;
            numberIterator++;
        }
        if(questionLowerCase == true){
            auto lowerCaseListFront = listOfUndercase.begin();
            int listUnder = rand() % 26 + 1;
            advance(lowerCaseListFront, listUnder);
            password += *lowerCaseListFront;
            numberIterator++;
        }
        if(questionIntegers == true){
            auto integerListFront = listOfIntegers.begin();
            int listInteger = rand() % 9 + 0;
            advance(integerListFront, listInteger);
            password += *integerListFront;
            numberIterator++;
        }
        if(questionSpecialint == true){
            auto specialListFront = listOfSpecialCharacters.begin();
            int specialInteger = rand() % 8 + 1;
            advance(specialListFront, specialInteger);
            password += *specialListFront;
            numberIterator++;
        }        
    }
    return password;
}
int main(){

    //get length of password
    char choice;
    int lengthOfPassword;
    bool questionUpperCase, questionLowerCase, questionIntegers, questionSpecial;

    cout << "Enter length of password" << endl;
    cin >> lengthOfPassword;

    cout << "Pick how password will be generated, Enter Y/N" << endl;
    cout << "Would you like capitalized letters?" << endl;
    cin >> choice;
    cout << endl;
    if (choice == 'Y' || choice == 'y'){
        questionUpperCase = true;
    }
    else{
        questionUpperCase = false;
    }

    cout << "Would you like undercase letters?" << endl;
    cin >> choice;
    cout << endl;
    if (choice == 'Y' || choice == 'y'){
        questionLowerCase = true;
    }
    else{
        questionLowerCase = false;
    }

    cout << "Would you like numbers in the password?" << endl;
    cin >> choice;
    cout << endl;
    if(choice == 'Y' || choice == 'y'){
        questionIntegers = true;
    }
    else{
        questionIntegers = false;
    }

    cout << "Would you like Special Characters in the password?" << endl;
    cin >> choice;
    cout << endl;
    if(choice == 'Y' || choice == 'y'){
        questionSpecial = true;
    }
    else{
        questionSpecial = false;
    }

    cout << getPassword(questionUpperCase, questionLowerCase, questionIntegers, questionSpecial, lengthOfPassword) << endl;
    
    return 0;

}