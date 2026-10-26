# Propunere – Dozator automat de pastile cu carusel

Laborator SIO (ATmega328P, programare la nivel de registru, fără biblioteci Arduino).

## Idee
Un servomotor rotește un carusel și eliberează doza la ora programată, un buzzer anunță ora,
iar un senzor de proximitate confirmă că doza a fost luată (altfel se înregistrează ca ratată).
Orarul și istoricul se păstrează în EEPROM și se gestionează de pe PC prin USART.

## Periferice programate
- Timer1 (Fast PWM, 50 Hz) – comanda servomotorului
- USART – setarea orarului și citirea istoricului de pe PC
- TWI (I2C) – modul RTC DS3231
- INT0 – detecția mâinii (întrerupere externă)
- Timer2 (CTC) – temporizarea alarmei
- EEPROM – orar și istoric persistent

## Componente
| Nr. | Denumire | Preț (RON) |
|-----|----------|-----------|
| 1 | Placă Arduino Uno (ATmega328P) | 30,40 |
| 2 | Modul RTC DS3231 | 30,60 |
| 3 | Buzzer | 3,63 |
| 4 | Servomotor SG90 | 9,49 |
| 5 | Senzor de proximitate | 8,13 |

Documentul complet: [Propunere_Dozator_pastile.docx](Propunere_Dozator_pastile.docx)
