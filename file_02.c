// write a c progr<am to open the file  "hello.txt" read its content and display it on the screen 
#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *file;
    char string[100];
    file = fopen("/media/ivar/Local Disk/file_handiling in c/hello.txt", "r");
    if(file==NULL){
        printf("file cannot be opened");
        exit(1);
    } 
    else{
        fgets(string, 100, file);
        printf("\nThe text from file is: %s", string);
        fclose(file);
    }
    return 0;
}