#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "data.h"
#include <string>

using namespace std;

class executive
{
	private:
		//ptr to array of temps
		data* temps_arr;
		//size of the array
		int temps_size;

	public:
		//operates by taking the dating from the input text file
		executive(string fileName);
		//deconstructor
		~executive();
		//displays the menu
		void run();
		//prints all of the weather information
		void print(data temp);
};

#endif
