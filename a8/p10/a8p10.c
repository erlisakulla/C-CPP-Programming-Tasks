/*
CH-230-A
a8p10.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct usersfile {
    char *login;
    int pos;
} UserData;

int main() {
    UserData data[300];
    char x[300]; 
    int count = 0;
    data[0].pos = 0;	
	
    char file_name[150];
    fgets(file_name, sizeof(file_name), stdin);//inputting file name
    file_name[strlen(file_name) - 1] = '\0';

    FILE *pfile;
    pfile = fopen(file_name, "r");//opening file
    if (!pfile) {
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }

    while(1) {
        fscanf(pfile, "%s\n", x);
        data[count].login = (char*) malloc(sizeof(char) * strlen(x));
        strcpy(data[count].login, x);
        data[count].pos += strlen(x) + 1;
        fscanf(pfile, "%s\n", x);
        data[count + 1].pos = data[count].pos + strlen(x) + 1;
        count++;
        if(feof(pfile)){
        	break;
		}
    }//going through the content of the file

    while(1) {
        char username[300];
        fgets(username, sizeof(username), stdin);//username
        username[strlen(username) - 1] = '\0';

        if(strcmp(username, "exit") == 0) {
            break;
        }//exiting the program
        else { //asking for the password
            char password[300];
            fgets(password, sizeof(password), stdin);
            password[strlen(password) - 1] = '\0';

            int temppos = 0;
            int i;
            for(i = 0; i < count; i++){
                if(strcmp(data[i].login, username) == 0){
                    temppos = data[i].pos;
                    break;
                }
            }
            fseek(pfile, temppos, SEEK_SET);
            
            char check[300];
            fscanf(pfile, "%s\n", check);
			//checking for password correctness
            if(strcmp(check, password) == 0){
                printf("Access to user %s is granted.\n", username);
            } 
            else {
                printf("Access to user %s is denied.\n", username);
            }   
        }
    }

    printf("Exiting ...\n");
    int i;
    //freeing allocated memory
    for(i = 0; i < count; i++){
        free(data[i].login);
    }
    fclose(pfile);

    return 0;
}
