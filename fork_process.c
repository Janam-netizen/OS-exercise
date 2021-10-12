//
// Created by Janam Zaveri on 11/10/2021.
//
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>

int main( int argc, char *argv[] ){

    int number=atoi(argv[1]);



    for (int i=0;i<number;i++){

        int pid=fork();

        printf("Hello from %i\n",pid);




    }






}