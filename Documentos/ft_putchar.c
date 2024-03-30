#include <unistd.h>
void ft_putchar(char c);
int main (void){
	char carac;
	carac='a';
	ft_putchar(carac);
	return(0);
}
void ft_putchar(char c){
	write(1,&c,1);
	write(1,"\n",1);
}
