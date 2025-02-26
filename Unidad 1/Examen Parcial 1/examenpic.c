/****************************************************
Integrantes deel equipo:
Carreon Rivera Oscar
Luna Alvarado Josue Daniel
Garcia Mayorga Brayan Jair
Camacho Garcia Julia Guadalupe
Martinez Delgado Rolando
Ramorez Vazquez Wendy Itzel
****************************************************/
void main() {
     //Se declran todos los puertos como salidas
     TRISA=0x00;
     TRISB=0x00;
     TRISC=0x00;
     TRISD=0x00;

     //inicializar los puertoc como apagados
     LATA = 0x00;
     LATB = 0x00;
     LATC = 0x00;
     LATD = 0x00;

     //ciclo que hara que encienda y apague
     while(1){
            //se apaga el led
            LATA = 0x00;
            LATB = 0x00;
            LATC = 0x00;
            LATD = 0x00;
            Delay_ms(1000); // hay un delay de 1 segundo

            //se enciende el led
            LATA = 0xFF;
            LATB = 0xFF;
            LATC = 0xFF;
            LATD = 0xFF;
            Delay_ms(1000); // hay un delay de 1 segundo
     }
}