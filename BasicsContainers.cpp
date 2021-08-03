#include <iomanip>
#include <iostream>
#include <array>
#include <algorithm>
//Deals with date and time, get more precise time
#include <chrono>
#include <random>
using namespace std;

void arrayFunction(){
    int a [10]; // Stack
    // int* b = new int[10]; //Heap
    // a[17] = 6; //Legal but bad
    // delete[] b;

    array<int , 10> b;
    b[17] = 6;

    // b.size(); //Returns size of the array
    // b.data(); //Returns pointer to the continguous data

    //iterator
    
    //Dont need to do this
    // for(int i = 0; i < 10; i++){}
    //Do this instead, can capture the whole, dynamic container
    for(int i = 0; i < b.size(); i ++){}

    //Algorithm Library is nuts and can do cool shit
    // fill(b.begin(), b.end(), something());
    
}
//This function will show how a vector changes position in memory to find enough space for the whole vector
//Will also show the time is takes
//This is a more complicated program that I might want to study
void vectorFunction(){
    //Lambda function to roll dice between 1 and 6
    auto roll = [](){return rand() % 6 + 1; };

    //creates a container
    vector<int> container;

    //add one item to container
    container.push_back(roll());

    //figure out what this means
    chrono::duration<double> durInsertTime(0);
}
int main(){
    

    return 0;
}