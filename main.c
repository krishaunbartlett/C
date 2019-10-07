#include <stdio.h>
#include <string.h>
#include "lib/calc.h"
#include "lib/func.h"

char username[15] = "Stefan Powell";
char password[10] = "test";
char user_get[15];
char user_pass[100];
char choice[10];
int  value = 0;

int main(){
	if(value == 1){
		goto success;
	}

	check_username_password();

	success:
		printf("Welcome\n");
		printf("> ");
		gets(choice);
		if( (strcmp(choice,"exit")) != 0){
			push_func(choice);
		}
		else{
			printf("End of Program\n");
		}
}


int check_username_password(){
	printf("Enter Username: ");
	gets(user_get);
	printf("Enter Password: ");
	gets(user_pass);
	if( (strcmp(username,user_get)) == 0 && (strcmp(password,user_pass)) == 0)
	{
		value = 1;
		main();
	}
	else
	{
		printf("Username or Password does not match\n");
	}
}

