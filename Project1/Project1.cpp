
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    /*
    if (MydblLinkedList.IsEmpty())
        cout << "\nYES, List is empty\n";
    else
        cout << "\NO, List is NOT empty\n";
    */

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    /*
    if (MydblLinkedList.IsEmpty())
        cout << "\nYES, List is empty\n";
    else
        cout << "\NO, List is NOT empty\n";
    */

    /*
    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();
    */

    //cout << "\nNumber of items in Linked List = " << MydblLinkedList.Size();


    //MydblLinkedList.Clear();
    //cout << "\nNumber of items in Linked List = " << MydblLinkedList.Size();


    //MydblLinkedList.Reverse();
    //cout << "\nNumber of items in Linked List after Reverse \n ";
    //MydblLinkedList.PrintList();


    // <int> ::Node* N;
    //N = MydblLinkedList.GetNode(1);
    //cout << "\nNode Value is: " << N->value;

   
    //cout << "\Item (2) Value is: " << MydblLinkedList.GetItem(2);
    

    //MydblLinkedList.UpdateItem(2, 500);
    //cout << "\n After Updating Item (2) : \n";
    //MydblLinkedList.PrintList();


    MydblLinkedList.InsertAfter(4, 500);
    cout << "\nAfter Insert : \n";
    MydblLinkedList.PrintList();

    system("pause>0");

}
