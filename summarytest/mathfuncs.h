#pragma once
#ifndef TEST_H
#define TEST_H
#ifdef __cplusplus
extern "C" {       	/*make sure the files are compiled in C*/
#endif


	int add(int a, int b);
	int sub(int a, int b);
	int mul(int a, int b);
	double divs(int a, int b);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // !TEST_H
