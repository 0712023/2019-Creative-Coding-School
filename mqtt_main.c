while (1)
		{
			sleep(10); // Publish message to ARTIK cloud every 10s
			char str[600];

			// Publish ADC port readings
			strcpy(str,"{\"Sensors\":{"); //strcpy : string2를 string1에 복사합니다.

			struct adc_msg_s samples[ADC_MAX_SAMPLES];
			char tempBuf[20];
			float val = read_adc(A2);
			float temp = val*330/4096-50;
			sprintf(tempBuf,"\"temperature\":%.1f", temp ); strcat(str,tempBuf); strcat(str,"}}"); //strcat : string2를 string1에 연결합니다.

			printf("Published %s\n\n",str);
			if (mqtt_publish(pClientHandle, MESSAGE_TOPIC, str, sizeof(str), 0, 0) != 0)
			{
				printf("Error: mqtt_publish() failed.\n");
			}
			else
			{
				//printf("\n-Published Data------------------------------------------------\n");

			}
		}
