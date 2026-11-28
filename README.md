# ELEGOO Super Starter Kit

My first robotics repo. I work through the ELEGOO Super Starter Kit with an Arduino Uno, one folder per lesson, building up toward robotics projects.

## Lessons

| Lesson | Topic | Folder |
|--------|-------|--------|
| 02 | Blink the built-in LED | [L02_blink](L02_blink/) |
| 03 | LED brightness with different resistors | [L03_LED](L03_LED/) |
| 04 | RGB LED and color mixing with PWM | [L04_RGB](L04_RGB/) |
| 05 | Digital input with push buttons | [L05_digital_input](L05_digital_input/) |

## Repo layout

```
ELEGOO_Super-_Starter-_Kit/
├── README.md
├── L02_blink/
│   ├── L02_blink.ino
│   └── L02_blink.md
├── L03_LED/
│   ├── L03_LED.md
│   └── circuit_10k_ohms
├── L04_RGB/
│   ├── L04_RGB.md
│   ├── L04_RGB.ino
│   └── images/
├── L05_digital_input/
│   ├── L05_digital_input.md
│   └── L05_digital_input.ino
└── images/
```

Arduino requires a sketch's `.ino` file to have the same name as its folder, so `L02_blink/` holds `L02_blink.ino`.

---

## L02_blink

Blinks the Uno's built-in LED once per second.

![Uno running Blink](images/01_blink_board.png)

Demo video: [L02_blink/blink-demo.mov](L02_blink/blink-demo.mov)

### Wiring

No external wiring. The only connection is the USB cable between the Uno and the computer, which provides power and carries the upload. The LED is the one on the board labelled **L**, wired internally to digital pin 13 (`LED_BUILTIN`).

### How to run

1. Open `L02_blink/L02_blink.ino` in the Arduino IDE.
2. Select **Tools → Board → Arduino Uno** and the correct port (mine was COM3).
3. Click **Upload**.

### What I learned

<!-- Fill in with your own notes. Prompts: -->
- What `setup()` and `loop()` each do:
- What `pinMode`, `digitalWrite` and `delay` do:
- What went wrong or surprised me while uploading:

---

## L03_LED

Changes the brightness of an LED by using resistors of different values (220 Ω, 1 kΩ and 10 kΩ). No code is needed. The Uno only supplies 5V over USB.

**Key idea:** bigger resistor = less current = dimmer LED.

Full notes, circuit and photos: [L03_LED/README.md](L03_LED/README.md)

---

## L04_RGB

Mixes red, green and blue light with PWM (`analogWrite`) to make different colors and fade between them.

Full notes, wiring, code and photos: [L04_RGB/README.md](L04_RGB/README.md)

---

## L05_digital_input

Reads two push buttons with `INPUT_PULLUP`: one turns an LED on, the other turns it off.

Full notes, wiring and code: [L05_digital_input/README.md](L05_digital_input/README.md)

