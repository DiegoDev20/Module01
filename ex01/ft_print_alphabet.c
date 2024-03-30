#include <unistd.h>
 
void ft_print_alphabet(void){
    int num1=97,num2=122;
    while(num1<=num2){
        char letra=num1;
        write(1,&letra,1); 
        num1++;
    }
}

