#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    // Write your main here
    int zeroto24, twentyFiveTo49, fiftyTo74, seventyFiveTo99, hundredTo124, hundredTwentyTo149, hundredFiftyTo174, hundredSeventyTo200;
    int fileOutput;
    ifstream myfile;
    myfile.open("Ch8_Ex4Data.txt");
    
    while(myfile >> fileOutput){
        if(fileOutput >= 0 && fileOutput <= 24){
            zeroto24++;
        }
        else if(fileOutput >= 25 && fileOutput <= 49){
            twentyFiveTo49++;
        }
        else if(fileOutput >= 50 && fileOutput <= 74){
            fiftyTo74++;
        }
        else if(fileOutput >= 75 && fileOutput <= 99){
            seventyFiveTo99++;
        }
        else if(fileOutput >= 100 && fileOutput <= 124){
            hundredTo124++;
        }
        else if(fileOutput >= 125 && fileOutput <= 149){
            hundredTwentyTo149++;
        }
        else if(fileOutput >= 150 && fileOutput <= 174){
            hundredFiftyTo174++;
        }
        else if(fileOutput >= 175 && fileOutput <= 200){
            hundredSeventyTo200++;
        }
    }
    
    cout << "0 – 24 " << zeroto24 << endl;
    cout << "25 - 49 " << twentyFiveTo49 << "\n";
    cout << "50 - 74 " << fiftyTo74 << "\n";
    cout << "75 - 99 " << seventyFiveTo99 << "\n";
    cout << "100 - 124 " << hundredTo124 << "\n";
    cout << "125 - 149 " << hundredTwentyTo149 << "\n";
    cout << "150 - 174 " << hundredFiftyTo174 << "\n";
    cout << "175 - 200 " << hundredSeventyTo200 << "\n";

    myfile.close();
    return 0;
    return 0;
}
/*
Write a program that reads a file consisting of students’ test scores in the range 0–200. It should then determine the number of students having 
cores in each of the following ranges:
0–24, 25–49, 50–74, 75–99, 100–124, 125–149, 150–174, and 175–200.
Output the score ranges and the number of students. (Run your program with the following input data: 
*/