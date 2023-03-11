//Variavel
int ledAzul = 8;
int ledVerde = 10;
int botao = 9;

//definições
void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(botao, INPUT);
  pinMode(ledAzul, OUTPUT);
 
}

void loop()
{
  if(digitalRead(botao)==HIGH){ //Read é para entrada 
  	
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde, LOW);
  	delay(1000);   
  	  
    digitalWrite(ledAzul, HIGH);
    digitalWrite(ledAzul, LOW);
  	delay(1000);
    
  }//fecha if
  
  else{
     digitalWrite(ledVerde, HIGH);  
     digitalWrite(ledAzul, HIGH);   
  }//fecha else
  

}//loop