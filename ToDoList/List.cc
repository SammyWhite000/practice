#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include "List.h"

using namespace std;

toDoList::toDoList(){ 
    totalItemsOnList = 0;
}

void toDoList::print(){
    cout << "is it working?" << endl;
    currentNode = head;
    while(currentNode != nullptr){
        cout << "Item: " << currentNode->listEntry << '\n';
        cout << "Status: " << currentNode->Status;
        if(currentNode->Status == Open)
            cout << "Open" << '\n';
        else if(currentNode->Status == Crossed)
            cout << "Done" << '\n';
        currentNode = currentNode->linkToNext;
    } 
}
/*
void toDoList::deleteItem(string deletedItem){
    for(int y = 0; y < totalItemsOnList; y++){
        if(deletedItem == Node[y].listEntry){
            Node[y].availibility = Deleted;
        }
    }

}
*/
void toDoList::crossOff(string editItem){
    currentNode = head;
    while(currentNode != nullptr){
        if(currentNode->listEntry == editItem){
            currentNode->Status == Crossed;
            break;
        }
        else
            currentNode = currentNode->linkToNext;
    }
}
void toDoList::addNewNode(string addingItem){
    //Use new to allocate new memory for node manually
    newNode = new Node;
    newNode->listEntry = addingItem;
    newNode->Status = Open;
    newNode->linkToNext = nullptr;
    if(head == nullptr){
        head = newNode;
        tail = newNode;
    } 
    else{
        tail->linkToNext = newNode;
        tail = newNode;
    }
    totalItemsOnList++;
}
    












