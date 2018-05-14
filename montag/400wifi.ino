void netzscanner(){
  WiFi.mode(WIFI_STA); // This is the way I say that I am a client, and not an AP

  Serial.println("Scanning available networks...");

  int n = WiFi.scanNetworks();

  for(int i=0; i<n; i++){
    Serial.print("  " );
    Serial.print(WiFi.SSID(i));
    Serial.print(" " );
    Serial.print(WiFi.BSSIDstr(i));
    Serial.print(" " );
    Serial.println(WiFi.RSSI(i));
  }

  //Connect to the network with SSID Seminar_203 and password vhsbsheyden
  Serial.print("Connecting to the network: ");
  Serial.println(WiFiSSID);


  //WiFi.begin("Seminar_203", "vhsbsheyden");
  WiFi.begin(WiFiSSID, WiFiPassword);

  // Check if i am connected to the wifi network
  int i = 0;
  while ((i<20) && (WiFi.status() != WL_CONNECTED)){
    delay(750);
    i++;
  }

  if (WiFi.status() == WL_CONNECTED){
    Serial.print("Connected to the network. The actual IP of this device is: ");
    Serial.println(WiFi.localIP());
  }else{
    Serial.println("NOT connected to the newtwork");
  }
}

