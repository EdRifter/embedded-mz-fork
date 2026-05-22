// Anteater Electric Racing, 2026

#include "speaker.h"

void Speaker_Init() {
    pinMode (speakerPin, OUTPUT);
}

void Speaker_Play() {
    tone (speakerPin, 1300);
    delay (3000);
    noTone(speakerPin);
}

