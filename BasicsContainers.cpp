#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    
    int a [10]; // Stack
    int* b = new int[10]; //Heap

    delete[] b;
    
    return 0;
}