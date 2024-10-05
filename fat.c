#include <stdio.h>
#include <stdlib.h>
#define MAX 20
typedef struct FAT{
    int itable[MAX];
    char* Stable[MAX];
} FAT;

void write(FAT* cluster, int index, char* string, int next){
    if(index >= MAX || index < 0 || next >= MAX || next < -1){
        printf("error: out of bonds");
        exit(1);
    }
    cluster->Stable[index] = string;
    cluster->itable[index] = next;
}
void read(FAT* cluster, const int start){
    int index = start;
    while (cluster->itable[index] != -1){
        printf("%s", cluster->Stable[index]);
        index = cluster->itable[index];
    }
    printf("%s", cluster->Stable[index]);
}
int main(){
    FAT cluster = {{0}};
    write(&cluster, 0, "Hello, ", 1);
    write(&cluster, 1, "FAT ", 2);
    write(&cluster, 2, "filesystem!", -1);
    
    read(&cluster, 0);
    return 0;
}