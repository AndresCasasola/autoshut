
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

		string com = "shutdown /s /t 40 /c FATAL_MEMORY_ERROR_0x00005F58AD29C654ECBA30673ABEDFC2";
		cout << "Command: " << com << endl;
		system(com.c_str());
	
    return 0;  
}
