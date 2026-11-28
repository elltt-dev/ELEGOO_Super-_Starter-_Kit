# L04_RGB – RGB LED

Part of my ELEGOO Super Starter Kit notes.

**Goal:** Control the color of an RGB LED by mixing red, green and blue light with PWM, and fade between colors.

## Parts used

| Qty | Part |
|-----|------|
| 1 | ELEGOO UNO R3 |
| 1 | RGB LED (4 legs, common cathode) |
| 3 | 220 Ω resistors |
| 4 | Male-to-male jumper wires |
| 1 | Breadboard (MB-102) |

## What I learned

### RGB LED
- An RGB LED is three LEDs (red, green, blue) in one package.
- It has 4 legs: one for each color, and one **common** leg. The common leg is the **longest** one.
- In this kit the LED is **common cathode**, so the long leg goes to **GND**. That is why the sketch uses `HIGH` to turn a color on.
- Mixing light makes other colors: red + green = yellow, green + blue = cyan, red + blue = magenta, all three = white.
- Each color leg needs its own **220 Ω resistor**, as in Lesson 3.

### PWM (`analogWrite`)
- Digital pins can only be fully ON or fully OFF. **PWM** switches a pin on and off very fast to fake in-between levels.
- `analogWrite(pin, value)` takes a value from **0** (off) to **255** (full brightness).
- Only pins marked with **~** support PWM. On the UNO these are 3, 5, 6, 9, 10 and 11.

## Wiring

| LED leg | Through | Arduino pin |
|---------|---------|-------------|
| Red | 220 Ω resistor | 6 (PWM) |
| Green | 220 Ω resistor | 5 (PWM) |
| Blue | 220 Ω resistor | 3 (PWM) |
| Common (longest leg) | none | GND |

Wire colors in my photos: red wire = red leg, green wire = green leg, blue wire = blue leg, black wire = GND.

## Code

Sketch: [L04_RGB.ino](L04_RGB.ino)

Arduino requires the `.ino` file to have the same name as its folder, so the original ELEGOO file `RGB.LED.ino` is renamed `L04_RGB.ino`.

How the sketch works:
- `#define` gives each pin a name (`RED` = 6, `GREEN` = 5, `BLUE` = 3).
- `setup()` sets the three pins as outputs and starts with red on.
- `loop()` uses `for` loops to change a color value a little at a time. `analogWrite()` sends the new value to the pin, and `delay(10)` slows each step so the fade is smooth.

## How to run

1. Wire the circuit as in the table above.
2. Open `L04_RGB.ino` in the Arduino IDE.
3. Select **Tools → Board → Arduino Uno** and the correct port.
4. Click **Upload**.

## Photos

| Red | Green | Blue |
|-----|-------|------|
| ![Red](images/rgb_red.png) | ![Green](images/rgb_green.png) | ![Blue](images/rgb_blue.png) |

## Things I noticed and challenges

The sketch comments say the second loop should fade green out and blue in. When I read the code carefully, the second loop never changes `greenValue` or `blueValue`, so it only writes blue at full brightness and leaves green on. Because blue is never switched off again, it also stays on during the next red-to-green fade.

Challenge: edit the second `for` loop so that green goes down from 255 to 0 while blue goes up from 0 to 255, then add a third loop that fades blue back to red.

<!-- Fill in with your own notes: -->
- What I saw when the LED ran:
- What went wrong or surprised me:
- My fix for the second loop:

## Next

Lesson 05 – coming soon.

