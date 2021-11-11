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
    void deleteItem(string deletedItem){
        for(int y = 0; y < totalItemsOnList; y++){
            if(deletedItem == listEntries[y].listEntry){
                listEntries[y].availibility = Deleted;
            }
        }
        
    }
    void crossOff(string editItem){
        for(int x = 0; x < 20; x++){
            if(listEntries[x].listEntry == editItem){
                listEntries[x].availibility = Closed;
            }
        }
    }
    void add(string addingItem){
        listEntries[totalItemsOnList].listEntry = addingItem;
        listEntries[totalItemsOnList].availibility = Open;
        
        totalItemsOnList++;
    }
    
private:
    //Keeps track of total item in the list, won't exceed 20 for now
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
        cout << "4 - Print List" << "\n";
        cout << "5 - Exit" << "\n";
        cin >> menuChoice;

        switch(menuChoice){
            case 1:
                cout << "Enter Item: ";
                cin >> itemToAdd;
                myList.add(itemToAdd);
                break;
            case 2:
                cout << "Enter Item to Cross Off" << "\n";
                cin >> itemToAdd;
                myList.crossOff(itemToAdd);
                break;
            case 3:
                cout << "Enter Item to Delete" << "\n";
                cin >> itemToAdd;
                myList.deleteItem(itemToAdd);
                break;
            case 4:
                myList.print();
                break;
            case 5:
                exit(0);
                break;
        }
                
    }
    return 0;
}
