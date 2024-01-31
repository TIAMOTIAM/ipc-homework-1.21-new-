#include "sys.h" 
#include "delay.h"
#include "usart.h"
#include "bee.h"  
#include "icm20602.h" 
#include "tim.h"
extern int s;
int m;
int h;

	
int main(void)
{   int i=0;
	delay_init(168);
	
	s=0;
	OLED_Init();
	TIM3_Init(9000,8000);
    
    
    while (1)
   {     
	   if(s>=60)
	   {
		   s=0;
		   m++;
		   
	   }
	   if(m>=60)
	   {
		   m=0;
		   h++;
	   }
	   if(h>=24)
	   {
		   h=0;
	   }
	   OLED_ShowNum(1,1,s,2);
	   OLED_ShowChar(1,3,':');
	   OLED_ShowNum(1,4,m,2);
	   OLED_ShowChar(1,6,':');
	   OLED_ShowNum(1,7,h,2);
	   
   }  
		
}

