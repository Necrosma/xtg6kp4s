#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <cstring>
using namespace std;

int main(int argc,char** argv){
    FILE* file=NULL;
    file = fopen(argv[1],"rt");
    // file = fopen("src.txt","rt");

    while(true){
        char c=fgetc(file);
        if(c==EOF) break;
        else printf("%c",c);
    }
    fclose(file);
    return 0;
}