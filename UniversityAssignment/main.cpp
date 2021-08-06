#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class HashTable{
public:
    struct Entry{

        string Data;
        enum Status{neverUsed, Tombstone, Occupied};
        
    };
    static const int Size = 26;
public: 
    HashTable() = default;
private:
    Entry m_Entries[Size];
};

int main(){

    //Aapple Aorange Dapple Astrawberry
    // orange strawberry
    string input;
    getline(cin, input);
    stringstream ss(input); //Just puts the input right into string stream to be used later
    while(ss.good()){
        string token;
        ss >> token;

        string inputActualName = token.substr(1);
        if(token[0] == 'A'){

        }
        else if (token[0] == 'D'){
            
        }
    }
    return 0;
}