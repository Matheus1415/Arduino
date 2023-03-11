//	Monitor serial

int a =2;
int b =10;
int r;



void setup()
{
  Serial.begin(9600);
    
    //OPeradore matematicos
  
  	//soma
  
    r = a+b;
    Serial.print("Operacao matematica de soma: ");
    Serial.println(r);
  
  	//subtração
  
    r =a-b;
  	Serial.print("Operador de subtracao: ");
  	Serial.println(r);
  
  	//multiplicação
  
  	r= a*b;
    Serial.print("Operador de multiplicacao: ");
    Serial.println(r);
  
  	//divisão
  
  	r=a/b;
  	Serial.print("Operador de divisao");
  	Serial.println(r);
  
  	//resto
  
  	Serial.print("Resto da opreracao");
  	Serial.println(r%2);
  
  	//VERIFICAR SE É PAR OU IMPAR
int y= 5;

if(y%2){
 	Serial.println("impar"); 
}//fecha if 
else{
	Serial.println("par");
}//fecha else
  

  float n1=6;
  float n2= 5;

  float media = (n1+n2) /2;

  if(media >= 6){
      Serial.println("Aluno aprovado");
  }//fecha if

  else{
      Serial.print("Aluno reprovado");
  }//fecha else
  
  //FAÇA CALCULOS DO IMC E MOSTRE SO RESULTADOS
  //ABAIXO DE 24.0 MAGRO, 29.9 NORMAL
  //30.0 OBESIDADE 1, 35.0 OBESIDADE 2, 40.0 OBESIDADE 3
  //PESO/(ALTURA*ALTURA)
  
  float altura=1.67;
  float peso= 67.4;
  float imc;
  
  imc = peso/(altura* altura);
  
  if(imc <24){
  Serial.print("coma mais mano ou mana: ");
  Serial.print(imc);
  }else if((imc>=24.0)&&(imc<=29.9)){
  Serial.print("Voce ta no peso ideal");
  Serial.print(imc);
  }else if((imc >= 30.0)&&(imc<= 35.0));
  Serial.print("Voce ta ficando gordinho");
  Serial.print(imc);
  }else if((imc >= 35.0)&&(imc<= 39.0));
  Serial.print("Voce ta gordinho");
  Serial.print(imc);
  }else if(imc >= 40.0);
  Serial.print("gordinho vai malhar");
  Serial.print(imc);
  }

}//fecha void setap



void loop(){}

