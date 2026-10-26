void setup() {
  DDRB |= (1 << 5);
  DDRD &= ~(1 << 2);
  PORTD &= ~(1 << 2);
}

void loop() {
  if (PIND & (1 << PIND2)) {
    PORTB |= (1 << PORTB5);
  } else {
    PORTB &= ~(1 << PORTB5);
  }}
