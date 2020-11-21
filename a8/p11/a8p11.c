/*
CH-230-A
a8p11.c
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    //scaning number of files
    scanf("%d", &n);
    getchar();
    
    //destination file
    FILE *dest;
    dest = fopen("output.txt", "w+");
    if (!dest) {
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }
	
	//scanning names of files
    char *filenames[n];
    int i;
    for(i = 0; i < n; i++) {
        filenames[i] = (char*) malloc(sizeof(char) * 150);
        fgets(filenames[i], 150, stdin);
        filenames[i][strlen(filenames[i]) - 1] = '\0';
    }
    printf("Concating the content of %d files ...\nThe result is:\n", n);

    for(i = 0; i < n; i++) {
        FILE *pfile;
        pfile = fopen(filenames[i], "r");
        if(pfile == NULL){
            fprintf(stderr, "Cannot open file!\n");
            exit(1); 
        }
		
		//copying the content of the files
        char *content;
        fseek(pfile, 0, SEEK_END);
        int size = ftell(pfile);
        fseek(pfile, 0, SEEK_SET);
        content = (char*) malloc(sizeof(char)*(size + 1));
        fread(content, sizeof(char), size, pfile);
        fwrite(content, sizeof(char), size, dest);
        printf("%s\n", content);
        fclose(pfile);
        strcpy(content, "\n");
        fwrite(content, sizeof(char), strlen(content), dest);
        free(content);
    }

    fclose(dest);
    return 0;
}
