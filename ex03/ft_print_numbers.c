#include <unistd.h>
void ft_print_numbers(void);
int main (void)
{
	ft_print_numbers();
	return(0);
}
void ft_print_numbers(void){
	int num1=48,num2=57;
	while(num1<=num2){
		char numero=num1;
		write(1,&numero,1);
		num1++;		
	}
	write(1,"\n",1);
}
