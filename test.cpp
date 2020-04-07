#include <cassert>
#include <iostream>
#include "functions.h"

using namespace std;


int main() {
    cout << "Starting Test Bench..." << endl;

    string author[4] = {"JK Rowling","Harper Lee", "Lois Lowry", "J.R.R Tolkein"}; //Run mock arrays
    string titles[4] = {"Harry Potter and the Sorcerers Stone", "To Kill a Mockingbird", "The Giver", "The Lord of the Rings: Thel Fellowship of the Ring"};
    string publishers[4] ={"Bloomsbury Publishing", "Harper", "HMH Books for Young Readers", "Del Rey"};
    string isbns[4] = {"0439708184", "0062798189", "9780544336261", "0345538374"};


   if(true) {
       assert(iterativeSearch(titles, 4) == 2); //Checks index
    cout << "Assertion succesful\n" << endl;
   }


     if(true) {
        assert(iterativeSearch(titles, 4) == 1);
        cout << "Assertion succesful\n" << endl;
    }
    if(true) {
        assert(iterativeSearch(titles, 4) == 0);
        cout << "Assertion succesful\n" << endl;
    }
    if(true) {
        assert(iterativeSearch(titles, 4) == 3);
        cout << "Assertion succesful\n" << endl;
    }
        if(true) {
            assert(iterativeSearch(author, 4) == 1);
            cout << "Assertion succesful\n" << endl;
        }
    if(true) {
        assert(iterativeSearch(author, 4) == 2);
        cout << "Assertion succesful\n" << endl;
    }

    if(true) {
        assert(iterativeSearch(author, 4) == 3);
        cout << "Assertion succesful\n" << endl;
    }

    int result = -1;
    recursiveSearch (author, 4, 0, "JK Rowling", result);  //Checks the author index
     assert(result == 0);
    cout << "Succesful";

    recursiveSearch (author, 4, 1, "Harper Lee", result);
   assert(result == 1);
cout << "Successful";

    recursiveSearch (author, 4, 2, "Lois Lowry", result);
    assert(result == 2);
    cout << "Succesful";

    recursiveSearch (titles, 4, 0, "Harry Potter and the Sorcerers Stone", result);
    assert(result == 0);
    cout << "Succesful";




}