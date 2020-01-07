//falta importar la libreria lcdi2c

 



const int motorGrande =0;
const int motorPlato =0;
const int sensorFlujo =0;
const int sensorNivel =0;
const int sensorMovimiento=0;
const int valvulaCarga =0;
const int valvulaDrenado =0;


void setup() {



  pinMode (motorGrande, OUTPUT);
  pinMode(motorPlato, OUTPUT);
  pinMode(valvulaCarga, OUTPUT);
  pinMode(valvulaDrenado, OUTPUT);
  pinMode (sensorFlujo,INPUT);
  pinMode (sensorNivel,INPUT);
  pinMode (sensorMovimiento,INPUT);
  Serial.begin (9600);
}

void cargarAgua(){

}

void drenar(){

}

void chorro(){

}

void calcularHora(){

}


void loop() {
  


}
