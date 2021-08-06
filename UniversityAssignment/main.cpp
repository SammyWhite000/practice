#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class HashTable{
public:
    enum Status{NeverUsed, Tombstone, Occupied};
    struct Entry{
        string Data;
        Status status = NeverUsed;
    };
    
public: 
    static const int Size = 26;
    HashTable() = default;

    void Print(){
        //Prints the status based on the enum value
        for(int x = 0; x < Size; x++){
            if(m_Entries[x].status == NeverUsed){
                cout << "Never Used" << endl;
            }
            else if (m_Entries[x].status == Tombstone){
                cout << "Tombstone" << endl;
            }
            else if(m_Entries[x].status == Occupied){
                cout << "Occupied" << endl;
            }
        }
    }
private:
    Entry m_Entries[Size];
};

int main(){

    //Aapple Aorange Dapple Astrawberry
    // orange strawberry
    string input;
    HashTable hashtable;
    getline(cin, input);
    stringstream ss(input); //Just puts the input right into string stream to be used later


    //Go through the whole sstream, and while it is good, take a token string
    while(ss.good()){
        string token;
        ss >> token;

        string inputActualName = token.substr(1);
        if(token[0] == 'A'){

        }
        else if (token[0] == 'D'){
            
        }
    }

    hashtable.Print();
    return 0;
}