#include <stdio.h>
#include <string.h>

char options[3][10] = {"help", "exit", "calc"};
char arith[12];
char input[12];

void push_func(input){
	for(int i = 0; i < sizeof(options); i++){
		if(strcmp(options[i],input) == 0){
			if(i == 0){
				printf("The commands are defined internally\n");
				for(int j = 0; j < sizeof(options); j++){
					printf("%s \n", options[j]);
				}
			}
			if(i == 3){
				printf("calc>> ");
				gets(arith);
				printf("%s \n", arith);
			}
  		}
	 }
}
