//semaforo
//LED e botao
int ledRed1 =13;
int ledRed2 =12;
int ledAmarelo =11;
int ledVerde =10;
int botao= 9;
//TEMPO DOS LEDS
int tempoV =4000;
int tempoA =2100;

void setup()
{
  pinMode(ledRed1, OUTPUT);
  pinMode(ledRed2, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{

  
  if(digitalRead(botao)==HIGH){//Somente led amraelo ligado 
  //Amarelo ligado
  digitalWrite(ledRed1, 0);
  digitalWrite(ledRed2, 0);
  digitalWrite(ledVerde, 0);
  digitalWrite(ledAmarelo, 1);
  delay(700);//led Amarelo ligado
  digitalWrite(ledAmarelo, 0);
  delay(700);//led Amarelo ligado 
 
  
    
  }//fecha if
  
  else{
       //led vermelho ligado
  digitalWrite(ledRed1, 1);
  digitalWrite(ledRed2, 1);
  digitalWrite(ledAmarelo, 0);
  digitalWrite(ledVerde, 0); 
  delay(tempoV); //Tempo do LED VERMELHO
  //Verde
  digitalWrite(ledRed1, 0);
  digitalWrite(ledRed2, 0);
  digitalWrite(ledAmarelo, 0);
  digitalWrite(ledVerde, 1);
  delay(tempoV);//led verde ligado
  //Amarelo
   digitalWrite(ledRed1, 0);
  digitalWrite(ledRed2, 0);
  digitalWrite(ledAmarelo, 1);
  digitalWrite(ledVerde, 0);
  delay(tempoA);//led Amarelo ligado 
    
  }//fecha else
}//Void Loop