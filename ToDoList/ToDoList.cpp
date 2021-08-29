#include <iostream>
#include <string>
#include <sstream>
#include <list>
using namespace std;

class toDoList{
public:
    enum itemStatus{Open, Closed, Deleted};
    struct entries{
        string listEntry;
        //string note;
        itemStatus availibility;
    };
    toDoList(){
        totalItemsOnList = 0;
    }
    void print(){
        for(int x = 0; x < totalItemsOnList; x++){
            cout << "Entery - " << x << ": " << listEntries[x].listEntry << endl;
            if(listEntries[x].availibility == Open){
                cout << "Status - Open" << endl;
            }
            if(listEntries[x].availibility == Closed){
                cout << "Status - Closed" << endl;
            }
            if(listEntries[x].availibility == Deleted){
                cout << "Status - Deleted" << endl;
            }
        }
    }
    void crossOff(string editItem){
        for(int x = 0; x < 20; x++){
            if(listEntries[x].listEntry == editItem){
                cout << "Test" << endl;
                listEntries[x].availibility == Closed;
            }
        }
    }
    void add(string addingItem){
        listEntries[totalItemsOnList].listEntry = addingItem;
        listEntries[totalItemsOnList].availibility = Open;
        totalItemsOnList++;
    }
    
private:
    int totalItemsOnList;
    //creates a list of the type struct
    entries listEntries[20];
};

int main(){

    //Declare Object
    toDoList myList;

    int menuChoice;
    string itemToAdd;
    bool menuExit = false;
    while(!menuExit){
        cout << "1 - Add Item" << "\n";
        cout << "2 - Cross Off Item" << "\n";
        cout << "3 - Delete Item" << "\n";
        cout << "4 - Exit" << "\n";
        cin >> menuChoice;

        switch(menuChoice){
            case 1:
                cout << "Enter Item: ";
                cin >> itemToAdd;
                myList.add(itemToAdd);
                //myList.print();
                break;
            case 2:
                cout << "Enter Item to Cross Off" << "\n";
                cin >> itemToAdd;
                myList.crossOff(itemToAdd);
                myList.print();
                break;
            case 3:
                break;
            case 4:
            exit(0);
                break;
        }
        
        
    }
    //No menus, all input based, if A is in front of an item, add, if D is in front of an item, delete, if M, Modify
    //Two ways: One you can input items individually and go back and edit\delete them later
    //or you can input them all at once with a string stream and parse the string with tokens like in 
    //chronos video

    return 0;
}