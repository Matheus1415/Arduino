//semaforo 1
int ledRed1 =13;
int ledRed2 =12;
int ledAmarelo =11;
int ledVerde =10;
//semaforo2
int ledRed3 =7;
int ledRed4 =6;
int ledAmarelo2 =5;
int ledVerde2 =4;
//TEMPO DOS LEDS
int tempoV =2000;
int tempoA =2100;

void setup()
{
  //semaforo1
  pinMode(ledRed1, OUTPUT);
  pinMode(ledRed2, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  //semaforo2
  pinMode(ledRed2, OUTPUT);
  pinMode(ledRed3, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
}

void loop()
{
  
  //led vermelho1, vermelho2 e verde2 ligado
  digitalWrite(ledRed1, 1);
  digitalWrite(ledRed2, 1);
  digitalWrite(ledRed3, 0);
  digitalWrite(ledRed4, 0);
  digitalWrite(ledAmarelo, 0);
  digitalWrite(ledAmarelo2, 0);
  digitalWrite(ledVerde, 0);
  digitalWrite(ledVerde2, 1);
  delay(tempoV); //Tempo do LED VERMELHO
  
  //led amarelo2 e verde ligado
  digitalWrite(ledRed1, 0);
  digitalWrite(ledRed2, 0);
  digitalWrite(ledRed3, 0);
  digitalWrite(ledRed4, 0);
  digitalWrite(ledAmarelo, 0);
  digitalWrite(ledAmarelo2,1);
  digitalWrite(ledVerde, 1);
  digitalWrite(ledVerde2, 0);
  delay(tempoV); //Tempo do LED VERMELHO
  
  //led amarelo1, vermelho3 e vermelho4 ligado
  digitalWrite(ledRed1, 0);
  digitalWrite(ledRed2, 0);
  digitalWrite(ledRed3, 1);
  digitalWrite(ledRed4, 1);
  digitalWrite(ledAmarelo, 1);
  digitalWrite(ledAmarelo2,0);
  digitalWrite(ledVerde, 0);
  digitalWrite(ledVerde2, 0);
  delay(tempoV); //Tempo do LED VERMELHO
	  
  
}//id Loop

