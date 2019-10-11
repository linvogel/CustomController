#include <iostream>

#include "serial.h"

int main()
{
	
	Serial serial("\\\\.\\COM4");

	if (serial.IsConnected()) {
		const char* ptr = "Hello World!\n";
		serial.WriteData(ptr, 14);
		std::cout << "sent" << std::endl;
			
		Sleep(1000);
		std::cout << "new: ";
		const char* buffer = "                                                             ";
		std::cout << serial.ReadData((char*)buffer, 60) << ": ";
		std::cout << buffer << std::endl;
	}

	return 0;
}