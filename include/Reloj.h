#include <Arduino.h>

class Reloj{
   
    private:
    
    int x ;
    int col[];
    int fila[];

    public:
   
    void swHoraDecenas(int x, int col[], int fila[])
{
  
  if (x >= 20) {
  x=2;
}
else if (x>=10 && x<20) { 
  x=1;
}
else { 
  x=0;
}

 //////////////////////////////////////////////
 for(int i=0; i<=3;i++)
    {
      digitalWrite(col[i],HIGH);
    }
    for(int i=0; i<=3;i++)
    {
      digitalWrite(fila[i],LOW);
    }
 /////////////////////////   
  switch (x) {
  case 0:
    
    digitalWrite(col[0],LOW);
    

    break;
  case 1:
    
    digitalWrite(col[0],LOW);
    
    digitalWrite(fila[3],HIGH);
  
    break;
  case 2:
    
    digitalWrite(col[0],LOW);
    
    digitalWrite(fila[2],HIGH);
  
    break;
  default:
    Serial.print("Posible error argumento de swHoraDecenas()");
    break;
}
}

void swHoraUnidades(int x, int col[], int fila[])
{
  
  if (x >= 20) {
  x=x-20;
}
else if (x>=10 && x<20) { 
  x=x-10;
}
else { 
  x=x;
}

 //////////////////////////////////////////////
 for(int i=0; i<=3;i++)
    {
      digitalWrite(col[i],HIGH);
    }
    for(int i=0; i<=3;i++)
    {
      digitalWrite(fila[i],LOW);
    }
 /////////////////////////   
  switch (x) {
  case 0:
    
    digitalWrite(col[1],LOW);
    

    break;
  case 1:
    
    digitalWrite(col[1],LOW);
    
    digitalWrite(fila[3],HIGH);
  
    break;
  case 2:
    
    digitalWrite(col[1],LOW);
    
    digitalWrite(fila[2],HIGH);
  
    break;
  case 3:
    
    digitalWrite(col[1],LOW);
    
    digitalWrite(fila[2],HIGH);
    digitalWrite(fila[3],HIGH);
    break;
  case 4:
    
    digitalWrite(col[1],LOW);
    
    digitalWrite(fila[1],HIGH);
  
    break;
  case 5:
    
    digitalWrite(col[1],LOW);
    
    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
  case 6:
    
    digitalWrite(col[1],LOW);
    
    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[2],HIGH);
  
    break;
  case 7:
    
    digitalWrite(col[1],LOW);

    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[2],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
  case 8:
    
    digitalWrite(col[1],LOW);
    
    digitalWrite(fila[0],HIGH);
  
    break;  
  case 9:
    
    digitalWrite(col[1],LOW);

    digitalWrite(fila[0],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
   
    
  default:
    Serial.print("Posible error argumento de swHoraUnidades()");
    break;
}

}

void swMinDecenas(int x, int col[], int fila[])
{
  
  if (x >= 50) {
  x=5;
}
else if (x>=40 && x<50) { 
  x=4;
}
else if (x>=30 && x<40) { 
  x=3;
}
else if (x>=20 && x<30) { 
  x=2;
}
else if (x>=10 && x<20) { 
  x=1;
}
else { 
  x=0;
}

 //////////////////////////////////////////////
 for(int i=0; i<=3;i++)
    {
      digitalWrite(col[i],HIGH);
    }
    for(int i=0; i<=3;i++)
    {
      digitalWrite(fila[i],LOW);
    }
 /////////////////////////   
  switch (x) {
  case 0:
    
    digitalWrite(col[2],LOW);
    

    break;
  case 1:
    
    digitalWrite(col[2],LOW);
    
    digitalWrite(fila[3],HIGH);
  
    break;
  case 2:
    
    digitalWrite(col[2],LOW);
    
    digitalWrite(fila[2],HIGH);
  
    break;
  case 3:
    
    digitalWrite(col[2],LOW);
    
    digitalWrite(fila[2],HIGH);
    digitalWrite(fila[3],HIGH);
    break;
  case 4:
    
    digitalWrite(col[2],LOW);
    
    digitalWrite(fila[1],HIGH);
  
    break;
  case 5:
    
    digitalWrite(col[2],LOW);
    
    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
  case 6:
    
    digitalWrite(col[2],LOW);
    
    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[2],HIGH);
  
    break;
  case 7:
    
    digitalWrite(col[2],LOW);

    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[2],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
  case 8:
    
    digitalWrite(col[2],LOW);
    
    digitalWrite(fila[0],HIGH);
  
    break;  
  case 9:
    
    digitalWrite(col[2],LOW);

    digitalWrite(fila[0],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
   
    
  default:
    Serial.print("Posible error argumento de swMinDecenas()");
    break;
}
}

void swMinUnidades(int x, int col[], int fila[])
{
  
  if (x >= 50) {
  x=x-50;
}
else if (x>=40 && x<50) { 
  x=x-40;
}
else if (x>=30 && x<40) { 
  x=x-30;
}
else if (x>=20 && x<30) { 
  x=x-20;
}
else if (x>=10 && x<20) { 
  x=x-10;
}
else { 
  x=x;
}

 //////////////////////////////////////////////
 for(int i=0; i<=3;i++)
    {
      digitalWrite(col[i],HIGH);
    }
    for(int i=0; i<=3;i++)
    {
      digitalWrite(fila[i],LOW);
    }
 /////////////////////////   
  switch (x) {
  case 0:
    
    digitalWrite(col[3],LOW);
    

    break;
  case 1:
    
    digitalWrite(col[3],LOW);
    
    digitalWrite(fila[3],HIGH);
  
    break;
  case 2:
    
    digitalWrite(col[3],LOW);
    
    digitalWrite(fila[2],HIGH);
  
    break;
  case 3:
    
    digitalWrite(col[3],LOW);
    
    digitalWrite(fila[2],HIGH);
    digitalWrite(fila[3],HIGH);
    break;
  case 4:
    
    digitalWrite(col[3],LOW);
    
    digitalWrite(fila[1],HIGH);
  
    break;
  case 5:
    
    digitalWrite(col[3],LOW);
    
    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
  case 6:
    
    digitalWrite(col[3],LOW);
    
    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[2],HIGH);
  
    break;
  case 7:
    
    digitalWrite(col[3],LOW);

    digitalWrite(fila[1],HIGH);
    digitalWrite(fila[2],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
  case 8:
    
    digitalWrite(col[3],LOW);
    
    digitalWrite(fila[0],HIGH);
  
    break;  
  case 9:
    
    digitalWrite(col[3],LOW);

    digitalWrite(fila[0],HIGH);
    digitalWrite(fila[3],HIGH);
  
    break;
   
    
  default:
    Serial.print("Posible error argumento de swMinUnidades()");
    break;
}

}

};