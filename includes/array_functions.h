/*
 * functionstocomplete.h
 *
 *  Created on: Sep 10, 2017
 *      Author: keith
 */
#ifndef ARRAY_FUNCTIONS_H_
#define ARRAY_FUNCTIONS_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include <vector>
#include "../includes/constants.h"

/*============================================================================
 * The following are declarations for functions that I will test
 * Please provide the definitions in the
 * included cpp file, do not erase the stuff I put in there please
 * DO NOT MODIFY THIS FILE, I WILL USE MY OWN COPY
/============================================================================*/

namespace KP{
	//zero out vector that tracks words and their occurrences
	void clear(std::vector<constants::entry>  &entries);

	//how many unique words are in the vector
	int getSize(std::vector<constants::entry>  &entries);

	//get data at a particular location, if i>size() then get the last value in the vector
	//(this is lazy, should throw an exception instead)
	std::string getWordAt(std::vector<constants::entry>  &entries, int i);
	int getNumbOccurAt(std::vector<constants::entry>  &entries,int i);

	/*loop through whole file, one line at a time
	 * call processLine on each line from the file
	 * returns false: myfstream is not open
	 *         true: otherwise*/
	bool processFile(std::vector<constants::entry>  &entries,std::fstream &myfstream);

	/*take 1 line and extract all the tokens from it
	feed each token to processToken for recording*/
	void processLine(std::vector<constants::entry>  &entries,std::string &myString);

	/*Keep track of how many times each token seen*/
	void processToken(std::vector<constants::entry>  &entries,std::string &token);

	/*
	 * Sort myEntryArray based on so enum value.
	 * Please provide a solution that sorts according to the enum
	 * The presence of the enum implies a switch statement based on its value
	 * You are provided with a myentry compare function in the cpp file
	 */
	void sort(std::vector<constants::entry>  &entries, constants::sortOrder so);
}
#endif /* ARRAY_FUNCTIONS_H_ */
