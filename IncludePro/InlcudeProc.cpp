//============================================================================
// Name        : InlcudeProc.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "a.h"

// 假如b.h中没有ifndef define endif会有什么结果
#include "b.h"

// 注意#ifndef #define #endif, #define定义宏之后的有效范围
// #define定义宏应该是整个程序运行时都有效,可以把#ifndef看成是一个判断语句
#ifndef A_H_
#define A_H_
XXX
#endif

#ifndef B_H_
#define B_H_
XXX
#endif

int main() {

	return 0;
}
