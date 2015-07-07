# gemma.SMN

##### Dependecies

[Adafruit_NeoPixel library] (https://github.com/adafruit/Adafruit_NeoPixel)

##### Description

gemma.SMN is a sketch written for the [Adafruit Gemma] (http://www.adafruit.com/gemma).  It converts a (S)tring to [(M)orse code] (https://en.wikipedia.org/wiki/Morse_code), and blinks out the result via an [Adafruit (N)eoPixel strips] (http://www.adafruit.com/products/1461).

The project came about because I wanted to replace the red, blinking LED that I attach to my reflecting vest when running at night.  The light was bright enough, but I wanted more than three blinking patterns.

<img src="https://github.com/klinstifen/gemma.SMN/blob/master/images/IMG_0004.jpg" width="50%" height="50%">

The finished result is a set of three strips of NeoPixels, controlled by a Gemma, and powered by a 3.7v 500mAh Lipo.

<img src="https://github.com/klinstifen/gemma.SMN/blob/master/images/IMG_0001.jpg" width="50%" height="50%">
<img src="https://github.com/klinstifen/gemma.SMN/blob/master/images/IMG_0002.jpg" width="50%" height="50%">
<img src="https://github.com/klinstifen/gemma.SMN/blob/master/images/IMG_0003.jpg" width="50%" height="50%">
<img src="https://github.com/klinstifen/gemma.SMN/blob/master/images/IMG_0005.jpg" width="50%" height="50%">

The sketch can take any string, but as of now it will not parse numbers or characters.

Here's a [demo video](https://youtu.be/Xvr2BQ920dc) demonstration the sketch in action.
