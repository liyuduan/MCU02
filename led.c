#include "stm32f4xx.h" 

void led_Init(void)	   //������i��ͨ����j���ƣ�k=1��
{
		GPIO_InitTypeDef GPIO_InitStructure;

		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);//����	
	
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14 | GPIO_Pin_15 ;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
		GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//�������
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
		GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;
		GPIO_Init(GPIOB, &GPIO_InitStructure);
	
		GPIO_SetBits(GPIOB,GPIO_Pin_14 | GPIO_Pin_15);//Ϩ��
		
}

