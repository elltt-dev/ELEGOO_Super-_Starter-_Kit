# L05_digital_input – Digital Input (Push Buttons)

Part of my ELEGOO Super Starter Kit notes.

**Goal:** Read two push buttons with the Arduino and use them to turn an LED on and off.

- Button A turns the LED **on**.
- Button B turns the LED **off**.

## Parts used

| Qty | Part |
|-----|------|
| 1 | ELEGOO UNO R3 |
| 1 | 5mm red LED |
| 1 | 220 Ω resistor |
| 2 | Push buttons |
| several | Male-to-male jumper wires |
| 1 | Breadboard (MB-102) |

## What I learned

### Digital input
- So far the Arduino has only **sent** signals (`OUTPUT`). Now it also **reads** signals (`INPUT`).
- `digitalRead(pin)` returns `HIGH` or `LOW` depending on the voltage at the pin.

### Pull-up resistors and `INPUT_PULLUP`
- A pin that is connected to nothing "floats" and can read random values.
- `pinMode(pin, INPUT_PULLUP)` turns on a built-in resistor inside the Arduino that pulls the pin to `HIGH` when nothing is connected.
- The button connects the pin to **GND**, so:
  - Button **not pressed** → `HIGH`
  - Button **pressed** → `LOW`
- That is why the code checks for `== LOW`. It also means I do not need an external resistor for the buttons.

### Push button
- A push button connects its two sides only while it is pressed.
- On the breadboard, it sits across the center channel so that the legs on opposite sides are separate until the button is pressed.

## Wiring

| Part | Connects to |
|------|-------------|
| LED long leg (+) | Pin 5 through the 220 Ω resistor |
| LED short leg (−) | GND |
| Button A | One side to pin 9, the other side to GND |
| Button B | One side to pin 8, the other side to GND |

## Code

Sketch: [L05_digital_input.ino](L05_digital_input.ino)

Arduino requires the `.ino` file to have the same name as its folder, so the original ELEGOO file `Digital_input.ino.ino` is renamed `L05_digital_input.ino`.

How the sketch works:
- `ledPin`, `buttonApin` and `buttonBpin` name pins 5, 9 and 8.
- `setup()` sets the LED pin as an `OUTPUT` and both button pins as `INPUT_PULLUP`.
- `loop()` runs over and over:
  - If button A reads `LOW` (pressed), the LED turns on with `digitalWrite(ledPin, HIGH)`.
  - If button B reads `LOW` (pressed), the LED turns off with `digitalWrite(ledPin, LOW)`.
- The LED stays in its last state until a button changes it.

## How to run

1. Wire the circuit as in the table above.
2. Open `L05_digital_input.ino` in the Arduino IDE.
3. Select **Tools → Board → Arduino Uno** and the correct port.
4. Click **Upload**.
5. Press button A and the LED lights. Press button B and it turns off.

## Things I noticed and challenges

- The line `byte leds = 0;` is never used in this sketch.
- If both buttons are pressed together, the LED ends up **off**, because the check for button B runs after the check for button A.

Challenges:
1. Change the sketch so that **one** button toggles the LED on and off. Hint: you need a variable that remembers the LED state, and you need to wait for the button to be released so one press only counts once.
2. Add a third button and a second LED.

<!-- Fill in with your own notes: -->
- What I saw when I pressed each button:
- What went wrong or surprised me:

## Photos

<!-- Add a photo of my own circuit here, for example: -->
<!-- ![My circuit](images/circuit.jpg) -->

## Next

Lesson 06 – coming soon.

