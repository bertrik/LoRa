

//***************************************************************************************************
//                                              S E T U P                                           *
//***************************************************************************************************
void setup() {

    Serial.begin(115200);

    Serial2.begin(115200, SERIAL_8N1, 25, 23);
}

//***************************************************************************************************
//                                        L O O P                                                   *
//***************************************************************************************************
void loop() {

    if(Serial.available()) {
        int ch = Serial.read();
        Serial2.write(ch);
    }

    if(Serial2.available()) {
        int ch = Serial2.read();
        Serial.write(ch);
    }
}
