#include <unistd.h>
void ft_print_reverse_alphabet(void);
int main(void){
	ft_print_reverse_alphabet();
        return (0);
}
void ft_print_reverse_alphabet(void){
	int num1=97,num2=122;
     	while(num2>=num1){
         	char letra=num2;
         	write(1,&letra,1);
         	num2--;
     	}
     	write(1,"\n",1);
}

