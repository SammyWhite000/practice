#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include "List.h"
using namespace std;
void listMenu(toDoList &myList){
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
                myList.addNewNode(itemToAdd);
                break;
            case 2:
                cout << "Enter Item to Cross Off" << "\n";
                cin >> itemToAdd;
                //myList.crossOff(itemToAdd);
                break;
            case 3:
                cout << "Enter Item to Delete" << "\n";
                cin >> itemToAdd;
                //myList.deleteItem(itemToAdd);
                break;
            case 4:
                myList.print();
                break;
            case 5:
                exit(0);
                break;
        }            
    }
}

int main([[maybe_unused]]int argc, [[maybe_unused]]char* argv[]){

    //Declare Object
    toDoList myList;
    listMenu(myList);
    return 0;
}
