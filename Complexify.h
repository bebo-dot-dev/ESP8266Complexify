/*
 * Complexify.h
 *
 *  Created on: 6 Nov 2016
 *      Author: Joe
 */

#ifndef COMPLEXIFY_H_
#define COMPLEXIFY_H_

#include <Arduino.h>

#define NUMBER_OF_CHARSETS 95
#define MIN_COMPLEXITY 49
#define MAX_COMPLEXITY 120
#define MINIMUM_CHARS 8
#define MAXIMUM_CHARS 32

class Complexify {
private:
	static int ICACHE_FLASH_ATTR GetComplexityForCharset(String password, int charset[2]);
public:
	static double ICACHE_FLASH_ATTR GetPasswordComplexity(String password);
	static double ICACHE_FLASH_ATTR GetScaledPasswordComplexity(String password);
	static bool ICACHE_FLASH_ATTR IsPasswordValid(String password);
};

#endif /* COMPLEXIFY_H_ */
