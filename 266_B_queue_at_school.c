#include<stdio.h>

int main() {
    long int number;
    long int turns;
    long int counter = 0;
    scanf("%ld %ld",&number,&turns);

    char queue[number];
    scanf("%s",&queue);

    while(turns > 0) {
        for(int i=1; i < number; i++) {
            if(queue[i] == 'G' && queue[i-1] == 'B' && counter != 1) {
                queue[i] = 'B';
                queue[i-1] = 'G';
                counter++;
            }
        }
        counter = 0;
        turns--;
    }

    printf("%s",queue);

}