int hext_ir_main(int argc, FAR char *argv[])
{
	int32_t val;
	int i;
	int pin_ir;
	int max = 0;
	char *adc0 = "0";
	char *adc1 = "1";

	max = atoi(argv[3]); //atoi : string을 정수로 변환합니다.

	{if} (strcmp(argv[2], adc0)==0 ) //strcmp : string1의 값을 string2와 비교합니다.
	{
		pin_ir = A0;
	}
	else if (strcmp(argv[2], adc1)==0 )
	{
		pin_ir = A2;
	}
	else
	{
		show_help_basic_hext(argv);
	}

	printf("*********** HexT IR SENSOR BOARD TEST START ***********\n");

	for(i=0 ; i<max ; i++)
	{
		val = read_adc(pin_ir);
		printf("|--- (%2d/%d) IR Sensor Value(ADC %d):%d\n", i+1, max, pin_ir, val);
		up_mdelay(1000);
	}

	printf("************ HexT IR SENSOR BOARD TEST END ************\n");

	return 0;
}
