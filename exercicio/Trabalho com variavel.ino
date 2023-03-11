//Variavel
int ledVerde = 2;
int ledVermelho = 3;
int ledAmarelo = 4;

//Declaração dos pinos
void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
}

//Execução do codego
void loop()
{
  //VERDE
  digitalWrite(ledVerde, HIGH);
  delay(500); 
  
  digitalWrite(ledVerde, LOW);
  delay(500);
  
  //VERMELHO
  digitalWrite(ledVermelho,HIGH);
  delay(600); 
  
  digitalWrite(ledVermelho, LOW);
  delay(600); 
  
  //AMARELO
  
  digitalWrite(ledAmarelo,HIGH);
  delay(700); 
  
  digitalWrite(ledAmarelo, LOW);
  delay(700); 
  
}