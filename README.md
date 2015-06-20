# MetaMorphe Zoetrope #
#### By: Timothy Campbell (@timcam) and Ethan Chiou (@echiou) ####

![][main]

A record player modified to present an application of Cesar Torres' (@cearto) MetaMorphe, namely the ability to interpolate keyframes from a programatically defined change in a 3D model. The record player, which rotates at around three times its built-in speeds (~99 and 135, instead of 33 and 45 rpm, respectively), has either 15 or 10 3D printed models placed on the turntable, and a xenon flash is fired at a corresponding rate to produce the illusion of animation.

## How To Run It ##
- Press power button to turn record player on.
- Select appropriate speed:
    - "33" for 15 frame animations.
    - "45" for 10 frame animations.
- Place an appropriate plate on the turntable.
- Accelerate the turntable using the start/stop button.
    - Ensure the turntable reaches full speed before turning on the strobe.
- Turn on the strobe with the yellow button on the side of the case.
- When you are done using the zoetrope, turn off the strobe for the next user.

#### Notes ####

- .svg files for 10 and 15 frame plates can be found in the repository.
- The turntable must reach full speed before you turn on the strobe because  firing the strobe light and accelerating the turntable simultaneously draws too much power.

## How We Made It ##
![][exterior]
![][interior]
#### 1. [What we started with](#what-we-started-with)
#### 2. [Cog](#cog)
#### 3. [Flash](#flash)
#### 4. [Speed Control](#speed-control)
#### 5. [Circuitry and Programming](#circuitry-and-programming)

## What we started with ##
Left      | Right
--------- | ----------
![][left] | ![][right]

![][built in]

## Cog ##
![][cog]

## Flash ##
![][flash]
![][flash button]

## Speed Control ##
"33 rpm"  | "45 rpm"
--------- | ----------
![][33 rpm] | ![][45 rpm]

![][33 switch]

## Circuitry and Programming ##
![][arduino]
![][circuit board]

[main]: ./pictures/main.jpg
[exterior]: ./pictures/exterior.jpg "The exterior of the final result."
[interior]: ./pictures/interior.jpg "The interior of the final result."
[left]: ./pictures/buttons-left.jpg "Buttons on left side."
[right]: ./pictures/buttons-right.jpg "Buttons on right side."
[built in]: ./pictures/built-in-board.jpg "The analog circuitboard that came with the record player."
[cog]: ./pictures/cog.jpg "The 3D printed cog."
[flash]: ./pictures/flash.jpg "The flash with its laser cut case."
[flash button]: ./pictures/flash-button.jpg "Wiring for the button to turn flash on and off."
[33 rpm]: ./pictures/33-rpm.jpg "Turntable running at "33 rpm""
[45 rpm]: ./pictures/45-rpm.jpg "Turntable running at "45 rpm""
[33 switch]: ./pictures/switch.jpg "Wiring to read the current speed of the turntable"
[arduino]: ./pictures/arduino.jpg "The Arduino"
[circuit board]: ./pictures/circuit-board.jpg "The circuit board"
