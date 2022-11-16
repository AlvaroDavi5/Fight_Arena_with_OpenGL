#ifndef UTILS_H

#define UTILS_H

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Utils
{
public:
	// ! Constructor(s) and Destructor
	Utils();
	~Utils();

	// ? Member Functions
	time_t parseStringToTime(const char *strDate);
	const string parseTimeToString(const time_t time);
};

#endif // UTILS_H
