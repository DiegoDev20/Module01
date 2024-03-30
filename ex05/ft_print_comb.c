#include <unistd.h>

void ft_print_comb(void){
	int num1=48,num2,num3;
	while(num1<=55){
		num2=num1+1;
		while(num2<=56){
			num3=num2+1;
			while(num3<=57){
				char nu1=num1,nu2=num2,nu3=num3;
				write(1,&nu1,1);
				write(1,&nu2,1);
				write(1,&nu3,1);
				if (num1==55 && num2==56 && num3==57){
                return;
            	}				
				write(1,"; ",2);
				num3++;
			}
			num2++;
		}
	num1++;
	}
}
