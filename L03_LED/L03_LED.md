# L03_LED – LED and Resistors

Part of my ELEGOO Super Starter Kit notes.

**Goal:** Learn how the value of a resistor changes the brightness of an LED.

No code is needed in this lesson. The Arduino UNO is only used as a 5V power source through its USB cable.

## Parts used

| Qty | Part |
|-----|------|
| 1 | ELEGOO UNO R3 |
| 1 | 5mm red LED |
| 1 | 220 Ω resistor |
| 1 | 1 kΩ resistor |
| 1 | 10 kΩ resistor |
| 2 | Male-to-male jumper wires |
| 1 | Breadboard (MB-102) |

## What I learned

### Breadboard
- A breadboard lets you build circuits without soldering.
- Holes in the same short row are connected inside the board.
- The channel in the middle breaks the connection between the two sides.
- The long strips on the edges are **power rails** (+5V and GND) so many parts can share power.
- Connections are push-fit, so a loose part can cause strange, on-and-off problems.

### LED
- An LED has a **positive** and a **negative** leg and only lights one way round.
- The **longer leg is positive (+)**. The leg next to the flat edge on the case is negative (−).
- An LED must always have a **resistor** in the circuit, or too much current can burn it out.

### Resistor
- A resistor limits how much current flows. A **higher value** means **less current**, so a **dimmer LED**.
- Unit: ohm (Ω). 1 kΩ = 1,000 Ω.
- Resistors have no polarity. They work either way round.
- It does not matter whether the resistor is before or after the LED, as long as it is somewhere in the circuit.

### Reading resistor colors
The ELEGOO resistors in my kit have a blue body with 5 bands. The bands are digit, digit, digit, multiplier, tolerance.

| Value | Color bands (5-band) |
|-------|----------------------|
| 220 Ω | Red – Red – Black – Black – Brown |
| 1 kΩ | Brown – Black – Black – Brown – Brown |
| 10 kΩ | Brown – Black – Black – Red – Brown |

If you are not sure, measure with a multimeter.

## Circuit

5V → resistor → LED long leg (+) → LED short leg (−) → GND

1. Plug the UNO into the computer with the USB cable.
2. Put the resistor and the LED on the breadboard.
3. Use the red jumper wire for 5V and the black jumper wire for GND.
4. Pull the red wire out and put it back to switch the LED off and on.

## Experiment and results

| Resistor | What I saw |
|----------|-----------|
| 220 Ω | Brightest |
| 1 kΩ | A little dimmer |
| 10 kΩ | Only just visible |

Photos:

![220 ohm circuit](images/circuit_220_ohm.png)
![10k ohm circuit](images/circuit_10k_ohm.png)
![Example picture](images/example_picture.png)

## Key idea

Bigger resistor = less current = dimmer LED.

## Next

Lesson 04 – coming soon.
