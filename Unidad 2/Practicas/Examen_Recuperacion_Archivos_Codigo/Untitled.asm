	;Zona de datos **********************
	__CONFIG _CP_OFF & _WDT_OFF & _PWRTE_ON & _XT_OSC ; 

	LIST P=16F84A		
	INCLUDE <P16F84A.INC>	

	;Zona de código *******************
	ORG 0		

Inicio
	BSF STATUS, RP0	
	CLRF TRISA		
	BCF STATUS, RP0		

Principal
	MOVLW b'00000001'	
	MOVWF PORTA		
	GOTO Principal		

	END		