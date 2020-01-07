#include "./adc/bsp_adc.h"
#include "./data_analysis/analysis.h"

extern __IO uint16_t ADC_ConvertedValue;
float ADC_Vol;
float pressure;

void Data_pressure(void) 
{
		ADC_Vol =(float) ADC_ConvertedValue/4096*(float)3.3; // 读取转换的AD值
		pressure = (float)ADC_Vol*5-(float)12.5;
		if(pressure <= -10)
			pressure = -10;
		else if(pressure >= 10)
			pressure = 10;
		pressure =8.5;
}
