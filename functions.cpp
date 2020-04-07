/*
 * Function implementations here
 */
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int getTextFile(string (&titles)[100], string (&authors)[100], string (&publishers)[100], string (&isbns)[100]) {
    ifstream inFile;
    inFile.open("/Users/joshnachassi/Documents/GitHub/program2-joshnach/libraryBooks.txt"); //The file location
   int numBooks;


    inFile >> numBooks;   //infile receives numbooks
    string line;
    getline(inFile, line);
    cout << line << endl;


   for (int i = 0; i < numBooks; i++) {
        getline(inFile, line);  //Gets first line of txt
        size_t position = line.find(",");  //finds ","
        string sub = line.substr(0, position); //gets info from 0 to comma
        titles[i] = sub;   //stores it in title array[i]
        line.erase(0, position + 1);  //position + 1 so it can erase the comma
        position = line.find(",");
        sub = line.substr(0, position);  //gets line from 0 to position
        authors[i] = sub;
        line.erase(0, position + 1);
        position = line.find(",");
        sub = line.substr(0, position);
        publishers[i] = sub;
        line.erase(0, position + 1);
        isbns[i] = line;
   //inFile.close();
    }

return numBooks;
}



int iterativeSearch (string data[], int numOfBooks) {
    int index = -1;   //This will be the marker to see if im not getting a reading
    string name;
    cout << "Enter your search query: " << endl;
    getline(cin,name);
    getline(cin, name);

    for (int i = 0; i < numOfBooks; i++) {
        if (name==data[i]) {   //if what was entered matches the data at a certain point
            index = i;
        }

    }
    return index;
}

void recursiveSearch (string data[], int numBooks, int index, string name, int &result) {
    if (index == numBooks) {
        result = -1;
        return;
    } else if (data[index] == name) {    //if the input matches the file then the result equals the index
        result = index;
    } else {
        index++;
        recursiveSearch(data, numBooks, index, name, result);
    }
}
void printResults (string titles [], string authors [], string publishers [], string isbns [], int index) {
    //Creating a bunch of string arrays for what is needed
   cout << "1 book found!" << endl;
    cout << titles[index] << endl;
    cout << "by " << authors[index] << endl;
    cout << "published by " << publishers[index] << endl;
    cout << "ISBN: " << isbns[index] << endl;
    cout << endl;



}
















