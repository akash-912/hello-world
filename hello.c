#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of times for Hello world.\n");
    scanf("%d",&n);
    for(int i =0 ; i<n;i++){
        printf("Hello world.\n");
    }
    return 0;
}