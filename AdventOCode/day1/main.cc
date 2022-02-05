#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
auto getVector(){
    string data;
    vector<int> vec;
    ifstream myfile("number.txt");
    string::size_type sz;
    while(getline(myfile, data)){
       if(myfile.eof())
           break;
       int n = stoi(data, &sz);
       vec.push_back(n);
    }
    return vec;
}

void numOIncreases(const vector<int> &vec){
    int increaseNum = 0;
    for(int i = 0; i < (int)(vec.size())-1; i++){
        int sum1 = vec[i] + vec[i+1] + vec[i+2];
        int sum2 = vec[i+1] + vec[i+2] + vec[i+3];
        if(sum1 < sum2)
            increaseNum++;
    }
    cout << increaseNum << '\n';
}
int main(int argc, char* argv[]){

    //Create a ifstream object, get data into vector
    //DAY 1
    vector<int> vec;
    vec = getVector();
    numOIncreases(vec);
    return 0;
}

