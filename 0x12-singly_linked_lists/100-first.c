#include<stdio.h>

/**
 * myStartupFun - a constructor
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - startup is fun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
