void motd(){
	printf("\tComputer Engineering @ San Jose State University\n");
	printf("\tCreated by: Alben Cheung, Timothy Quan, Greg Mathews, David Kwong\n");
}

void loadDefaults(){

}

int checkFunctions(char * command, char ** args){
	
	//Local Variables
	char cmdStr[100];

	//NANO Editor
	/*if(strcmp("nano", command) == 0){
		if(args[1] == NULL){

		}else{
			strcpy(cmdStr, command);
			strcat(cmdStr, " ");
			strcat(cmdStr, args[1]);
			system(cmdStr);
		}
		return 0;
	}*/

	//VIM Editor
	/*if(strcmp("vim", command) == 0){
		command = NULL;
		if(args[1] == NULL){
			system("vim");
		}else{
			strcpy(cmdStr, command);
			strcat(cmdStr, " ");
			strcat(cmdStr, args[1]);
			system(cmdStr);
		}
		return 0;
	}*/

	//VI Editor
	/*if(strcmp("vi", command) == 0){
		if(args[1] == NULL){
			system("vi");
		}else{
			strcpy(cmdStr, command);
			strcat(cmdStr, " ");
			strcat(cmdStr, args[1]);
			system(cmdStr);
		}
		return 0;
	}*/

	//Clear Screen
	if(strcmp("clear", command) == 0){
		system("clear");
		return 0;
	}

	//Change Directory
	if(strcmp("cd", command) == 0){
		if(args[1] == NULL){
			chdir(getenv("HOME"));
		}else{
			if(chdir(args[1]) == -1){
				printf(" %s: No such directory\n", args[1]);
			}
		}
		return 0;
	}

	//Exit
	if(strcmp("exit", command) == 0){
		printf("Exiting Shell...\n");
		exit(0);
	}

	return 0;
}

int checkPATH(char * command, char ** args){
	FILE *sh142, *sh142tmp;
	int temp = 1;
	char c;

	if(strstr("PATH=", command)==0){
		printf("PATH change detected\n");
		sh142 = fopen(".sh142","r");
	
		fclose(sh142);
	}

	return 0;
}

int checkDATA(char * command, char ** args){
	return 0;
}