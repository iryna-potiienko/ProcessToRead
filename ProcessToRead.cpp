// ProcessToRead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable: 4996)
int main() {
	char* message = NULL;
	message = (char*)malloc(100);
	memset((void*)message, 0, 100);
	sprintf(message, "I'm here, please read me!");
	printf("Process ID: %d\nMessage: %s\nAddress: %p\n", GetCurrentProcessId(), message, message);
	getchar();
	printf("Aftermath: Message: %s Address: %p\n", message, message);
	getchar();
	return 0;
}