#ifndef PROGRAM2_FUNCTIONS_H
#define PROGRAM2_FUNCTIONS_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/**
 * Function Prototypes here
 */
int getTextFile(string (&titles)[100], string (&authors)[100], string (&publishers)[100], string (&isbns)[100]);
int iterativeSearch (string data[], int numOfBooks);
void recursiveSearch (string data[], int numBooks, int index, string name, int &result);
void printResults (string titles [], string authors [], string publishers [], string isbns [], int index);

#endif
