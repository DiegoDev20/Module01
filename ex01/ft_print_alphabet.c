#include <unistd.h>
int main(void){
	ft_print_alphabet(); 
	return (0);
}  
void ft_print_alphabet(void){
    int num1=97,num2=122;
    while(num1<=num2){
        char letter=num1;
        write(1,&letter,1); 
        num1++;
    }
    write(1,"\n",1);
}

