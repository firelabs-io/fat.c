// less secure, but slightly more easier to see
#include <stdio.h>
void writeFat(int index, int Itable[], char* str,char* Stable[], int next){
    Itable[index] = next;   
    Stable[index] = str;
}
void readFat(int index, int Itable[],  char* Stable[]){
    while (Itable[index]!= -1){
        printf("%s", Stable[index]);
        index = Itable[index];
    }
    printf("%s", Stable[index]);
}
int main(){
    int arr[] = {1, 2, -1, -1, -1, -1};
    char * arr2[] = {"Hello, ", "FAT ", "filesystem!", "", "", ""};
    int i = 0;
    
    readFat(i, arr, arr2);
    return 0;
}
