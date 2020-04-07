#include <iostream>
using namespace std;
#include <fstream>

#include "functions.h"
//#include "functions.cpp"

int main () {
    string titles[100];
    string authors [100];  //Creating a bunch of string arrays for what is needed
    string publishers[100];
    string isbns[100];
    int numBooks = getTextFile(titles, authors, publishers, isbns);
    while (true) {   //Loops Menu
        cout << "Welcome to the SMU library \n" << endl;
        cout << "Please select an option for searching: " << endl;
        cout << "1. Search for Title (Iterative)" << endl;
        cout << "2. Search for Author (Iterative)" << endl;
        cout << "3. Search for a Title (Recursive)" << endl;
        cout << "4. Search for a Author (Recursive)" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your selection: ";
        int option;
        //cout << "here\n";
        cin >> option;  //recieves the option they choose
        int index = 0;
        string name;

        if (option == 1) {   //this will start the iterative search
            index = iterativeSearch(titles, numBooks); //Giving index this function with titles parameter.
        }

        else if (option ==2) {
            index = iterativeSearch(authors,numBooks);//Giving index this function with author parameter.

        }
        else if (option ==3) {
            string nameInput;  //this receives the search
            cout << "Enter your search query: ";
            getline(cin, nameInput);
            getline(cin, nameInput);
             recursiveSearch(titles, numBooks, 0, nameInput,index );


        }
        else if (option ==4) {
            string authorInput;   //This receives the input for the author
            cout << "Enter your search query: ";
            getline(cin, authorInput);
            getline(cin,authorInput);
            recursiveSearch(authors, numBooks, 0, authorInput, index);
            //cout << index;



        }
        else if (option ==5) {
            break;
        }else{
            cout <<"\nInvalid option, try again. \n";  //if option is not on the menu
            cout <<endl;
            continue;
        }
        if(index != -1) {   //If the index is found do this
            printResults(titles, authors, publishers, isbns, index);
        }else{
            cout << "0 matches found!" << endl;
        }

    }
    return 0;
}

