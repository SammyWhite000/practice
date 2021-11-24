#include <iostream>
#include <string>
#include <sstream>
#include <list>

class toDoList{
public:
    enum itemStatus{Open, Crossed, Deleted};     
    struct Node{
        std::string listEntry;
        //string note;
        itemStatus Status;
        Node *linkToNext;
    };
    toDoList();
    void print();
    void deleteItem(std::string);
    void crossOff(std::string);
    void addNewNode(std::string);
private:
    //Keeps track of total item in the list, won't exceed 20 for now
    Node* head = nullptr;
    Node* tail = nullptr;
    Node *newNode, *currentNode;
    int totalItemsOnList;
};
