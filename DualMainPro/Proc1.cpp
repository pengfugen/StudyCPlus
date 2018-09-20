/*
 * Proc1.cpp
 *
 *  Created on: 2018Äê5ÔÂ15ÈÕ
 *      Author: FPENG3
 */
#include "Utils.h"
#include <stdio.h>
class A {
	A() {

	}

	~A() {

	}
};

int main(int argc, char **argv) {
	Utils utils;
	utils.print((char*)("=====Proc1=====\n"));
	printf("size:%d\n", sizeof(A));
	return 0;

}



