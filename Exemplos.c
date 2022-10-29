#include <stdio.h>

int main(){
    int x = 1;
    for (int i = 1; i<= 128; i+= i){
        x += x;
    }
    printf("%d", x);
}