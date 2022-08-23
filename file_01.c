/*c program to create "hello.txt" file and write text 
"welcome to c programming world"
*/
#include<stdlib.h>
#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("/media/ivar/Local Disk/file_handiling in c/hello.txt", "w");
    if(file==NULL ){
        printf("\nfile cannot created");
        exit(1);
    }     
    else{
        printf("File has been sucessfully created.");
    }
    fputs("Welcome to c programming world", file);
    fclose(file);
    return 0;
}