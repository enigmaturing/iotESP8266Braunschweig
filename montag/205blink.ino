void setupblink(){
  pinMode (PinLED,OUTPUT);
}

// unsigned long blinkzeitgeber = 0;  <- Mejor paso esta variable global a local (solo dentro de la funcion loop, pero la modifico con static, para que se comporte como una global. Así la puedo llamar zeitgeber en vez de blinkzeitgeber, es decir, no necsito un nombre tan especifico, porque esta variable solo la llamo dentro de la funcion loop)

void loopblink(){
  static unsigned long zeitgeber = 0;  // Lokal deklarierte varibale die sich global verählt. Para eso la he declarado como static
  // millis() returns the ms since  last reboot
  // micros() returns the ms since last reboot
  if (millis() - zeitgeber>1000){ // Canto mas alto es el valor de zeitgeber, mas lento parpadea el led. Asi puedo definir por ejemplo tres velocidades de parapadeo, para identificar el estado del modulo durante el laufzeit de mi programa
    zeitgeber =  millis();
    digitalWrite(PinLED, ! digitalRead(PinLED));
  }
}

