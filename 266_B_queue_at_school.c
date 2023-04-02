#include<stdio.h>

int main() {
    long int number;
    long int turns;
    
    scanf("%ld %ld",&number,&turns);

    char queue[number];
    scanf("%s",&queue);

    while(turns > 0) {
        for(int i=1; i < number; i++) {
            if(queue[i] == 'G' && queue[i-1] == 'B') {
                queue[i] = 'B';
                queue[i-1] = 'G';
                i = i + 1;
            }
        }
        turns--;
        
    }

    printf("%s",queue);

}