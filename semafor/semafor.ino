/**********************************************************************************
**                                                                               **
**                              CRUÏLLA DE SEMAFORS                              **
**                                                                               **
** EDUARD GARCIA                                                      13/3/2017  **
**********************************************************************************/

//********************************* INCLUDES **************************************

//********************************* VARIABLES *************************************
int t=2000;
const int AR = 7; // give a name to pin number 7
const int AA = 8; // give a name to pin number 8
const int AV = 9; // give a name to pin number 9
const int BR = 10; //give a name to pin number 10
const int BA = 11; // give a name to pin number 11
const int BV = 12; // give a name to pin number 12
//*********************************** SETUP ***************************************
void setup()
{
  pinMode (AR,OUTPUT); //define pin7 (AR) as an output
  pinMode (AA,OUTPUT); //define pin8 (AA) as an output
  pinMode (AV,OUTPUT); //define pin9 (AV) as an output 
  pinMode (BR,OUTPUT); //define pin10 (BR) as an output
  pinMode (BA,OUTPUT); //define pin11 (BA) as an output
  pinMode (BV,OUTPUT); //define pin12 (BV) as an output
  
}

//************************************ LOOP ***************************************
void loop()
{
  digitalWrite (AR,HIGH); //turn on AR
  digitalWrite (BR,HIGH); // turn on BR
  delay (t); // wait t ms without changes
  digitalWrite (BR,LOW); // turn off BR
  digitalWrite (BV,HIGH); // turn on BV
  delay (4*t); // wait 4 times t ms without changes
  digitalWrite (BV,LOW); //turn off BV
  digitalWrite (BA,HIGH); // turn on BA
  delay (t); // wait t ms without changes
  digitalWrite (BA,LOW); // turn off BA
  digitalWrite (BR,HIGH); // turn on BR
  delay (t); // wait t ms without changes
  digitalWrite (AR,LOW); // turn off AR
  digitalWrite (AV,HIGH); // turn on AV
  delay (4*t); // wait 4 times t ms without changes
  digitalWrite (AV,LOW); // turn off AV
  digitalWrite (AA,HIGH); // turn on AA
  delay (t); //wait t ms without changes
  digitalWrite (AA,LOW); // turn off AA
  digitalWrite (AR,HIGH); // turn on AR
}  


//*********************************** FUNCIONS ************************************
