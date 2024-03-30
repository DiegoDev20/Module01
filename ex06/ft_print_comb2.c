#include <unistd.h>
void ft_print_comb2(void);
int main(void){
	ft_print_comb2();
	return(0);
}
void ft_print_comb2(void){
	int num1=48,num2=48,num3=48,num4=48;
	while(num1<=57 && num2<=57){
		while(num3<=57){
			while(num4<=57){
				char nu1=num1;
				char nu2=num2;
				char nu3=num3;
				char nu4=num4;
				write(1,&nu1,1);
				write(1,&nu2,1);
				write(1," ",1);
				write(1,&nu3,1);
				write(1,&nu4,1);
				write(1,", ",2);
				if(num1==57 && num2==57 && num3==57 && num4==57){
					return;
				}
				num4++;
			}
			num4=48;
			num3++;
		}
		num3=48;
		num2++;
		if(num2==57){
			num1++;
			num2=48;
		}
	}
}
