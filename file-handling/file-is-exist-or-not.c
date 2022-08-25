#include<stdio.h> 
#include<sys/stat.h>

int checkIfFileExists(const char *filename);

int main(void)
{
    if(checkIfFileExists("even.txt"))
    {
        printf("file exists");
    }
    else
    {
        printf("file does not exists");
    }

}

int checkIfFileExists(const char* filename){
    struct stat buffer;
    int exist = stat(filename,&buffer);
    if(exist == 0)
        return 1;
    else  
        return 0;
}