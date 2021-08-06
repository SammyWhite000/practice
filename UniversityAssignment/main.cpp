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

    static const int Size = 26;
    HashTable() = default;

    void Add(string entryName){
        int unused;
        bool exists = Find(entryName);
        if(!exists){
            int insertIndex = getInsertIndex(entryName);
            m_Entries[insertIndex].Data = entryName;
            m_Entries[insertIndex].status = Occupied;
        }
            
        
    }

    void Delete(string entryName){
        int index;
        bool exists = Find(entryName, &index);
        if(exists)
            m_Entries[index].status = Tombstone;
    }

    void Print(){
        //Prints the status based on the enum value
        for(int x = 0; x < Size; x++){
            if(m_Entries[x].status == Occupied){
                cout << m_Entries[x].Data << " ";
            }
            // if(m_Entries[x].status == NeverUsed){
            //     cout << "Never Used" << endl;
            // }
            // else if (m_Entries[x].status == Tombstone){
            //     cout << "Tombstone" << endl;
            // }
            // else if(m_Entries[x].status == Occupied){
            //     cout << "Occupied" << endl;
            // }
        }
    }

private:
    int getIndex(const string& entryName){
        //Gets last character of the string
        //a = index 0 and z = index 25
        //ASCI decimal index for numbers start at 97, we will use this for conversion rate
        //a = 97
        return entryName.back() - 'a';
    }
    bool Find(const string& entryName, int* outIndex = nullptr){
        int index = getIndex(entryName);
        while(true){

            if(m_Entries[index].Data == entryName){
                //Checks to see if out index is valid: meaning it is something that isn't nullptr
                if(outIndex)
                    *outIndex = index;
                return true;
            }
            if(m_Entries[index].status == NeverUsed){
                return false;
            }
            //This will wrap around the array if it reaches the end
            index = (index + 1) % Size;
        }

        return false;
    }

    //gets the index where we can put the letter for the hash
    int getInsertIndex(const string& entryName){
        int index = getIndex(entryName);
        while(true){
            if(m_Entries[index].status == NeverUsed || m_Entries[index].status == Tombstone){
                return index;
            }
            //This will wrap around the array if it reaches the end
            index = (index + 1) % Size;
        }

        return false;
    }
private:
    //Creates a list of structs with the different data types
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
            hashtable.Add(inputActualName);
        }
        else if (token[0] == 'D'){
            hashtable.Delete(inputActualName);
        }
    }

    hashtable.Print();
    return 0;
}