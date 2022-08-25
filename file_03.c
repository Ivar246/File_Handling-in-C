/*Write a c program to create file and wrtie some text to it writing one character at a time 
using fputc() function. The program should write until user hits enter key. read filename from the user*/
#include<stdlib.h>
#include<stdio.h>
int main(){
    FILE *file;
    char filename[20], c;
    printf("\nEnter name of file: ");
    gets(filename);
    file = fopen(filename, "w");
    if(file==NULL){
        printrf
    }



}