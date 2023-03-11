// C++ code
int #pinot#PinMode1=13;
int #PinMode =13;
int #PinMode3 =13;

void setup()
{
 
   PinMode1(13, OUTPUT);
   PinMode2(13, OUTPUT);
   PinMode3(13, OUTPUT);
  
}//fim de stup(setup define a variavel e suas ações)

void loop()
{
  //Primeiro indica a porta e segundo indica ligado ou desligado
  
  digitalWrite(13, HIGH);
  
  delay(500); //Ligado em mili segundos
  
  digitalWrite(13, LOW);
  
  delay(500); //apagado em mili segundos
  
}//fim de loop (Ciclo infinito)