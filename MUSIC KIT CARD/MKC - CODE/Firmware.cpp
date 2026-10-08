#include "pitches.h"
#define BUZZZER_PIN  9
#define KEY_1 0
#define KEY_2 1 
#define KEY_3 2
#define KEY_4 3
#define KEY_5 4
#define KEY_6 5
#define KEY_7 6
#define KEY_8 21
int buttonState = 0

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
    Serial.begin(115200);
pinMode(Key_1, INPUT_PULLUP);
pinMode(Key_2, INPUT_PULLUP);
pinMode(Key_3, INPUT_PULLUP);
pinMode(Key_4, INPUT_PULLUP);
pinMode(Key_5, INPUT_PULLUP);
pinMode(Key_6, INPUT_PULLUP);
pinMode(Key_7, INPUT_PULLUP);
pinMode(Key_8, INPUT_PULLUP);
}

void loop() {
    button_1State = digitalRead(buttonPin);
    button_1State = digitalRead(buttonPin);
    button_1State = digitalRead(buttonPin);button_1State = digitalRead(buttonPin);
    


}