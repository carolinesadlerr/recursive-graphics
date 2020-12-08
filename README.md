# Recursive Graphics
Fractals are geometric figures in which each part has the same statistical character as the entire figure. In other words, the same patterns repeated at varying scales. We created recursive functions using Lindenmayer Systems (or L-systems) to implement the following fractals: Koch Snowflake, Hilbert Curve, and Sierpinski Triangle. 
In order to further test our understanding of fractals and L-Systems, we also created functions for the following fractals: Dragon Curve, Sierpinski Curve, and Koch Curve. 

## l-system-plotter.py
This is a python file used to visualize the C++ files. This is where the L-system commands are read and instruct a "turtle" to move and draw a line creating the fractal. In   order to use this file you must import matplotlib as mpl, import matplotlib.pyplot as plt, import matplotlib.colors as mcolors. In addition, import sys, from math import pi, sin, cos, and from math import isnan. In order the run this and output a file you must enter: python3 l-system-plotter.py l-system.txt <output file name> <degree of turn>. 
  
## Koch Snowflake
This cpp file writes commands to a text file to produce the Koch Snowflake fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. 
When compiling this file you should use this command: 

```g++ kochSnowflake.cpp -o ksnowflake && ./ksnowflake <amount of iterations>```

After, run this command: 

```python3 l-system-plotter.py l-system.txt <output file name> 60``` in order to visualize the fractal.
  
## Hilbert Curve
This cpp file writes commands to a text file to produce the Hilbert Curve fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. 
When compiling this file you should use this command: 

```g++ HilbertCurve.cpp -o hCurve && ./hCurve <amount of iterations>```

After, run this command: 

```python3 l-system-plotter.py l-system.txt <output file name> 90``` in order to visualize the fractal. 
  

## Sierpinski Triangle
This cpp file writes commands to a text file to produce the Sierpinski Triangle fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. 
When compiling this file you should use this command: 

```g++ SierpinskiTriangle.cpp -o sTriangle && ./sTriangle <amount of iterations>```

After, run this command: 

```python3 l-system-plotter.py l-system.txt <output file name> 120``` in order to visualize the fractal.
  
  
  
# Additional Fractals
The following information is about the additional fractals we implemented: Dragon Curve, Sierpinski Curve, and Koch Curve.
## Dragon Curve
This cpp file writes commands to a text file to produce the Dragon Curve fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: 

```g++ DragonCurve.cpp -o dCurve && ./dCurve <amount of iterations>```

After, run this command: 

```python3 l-system-plotter.py l-system.txt <output file name> 60``` in order to visualize the fractal. 
  

## Sierpinski Curve
This cpp file writes commands to a text file to produce the Sierpinski Curve fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: 

```g++ SierpinskiCurve.cpp -o sCurve && ./sCurve <amount of iterations>```

After, run this command: 

```python3 l-system-plotter.py l-system.txt <output file name> 60``` in order to visualize the fractal. 
  

## Koch Curve 
This cpp file writes commands to a text file to produce the Koch curve fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: 

```g++ kochCurve.cpp -o kCurve && ./kCurve <amount of iterations>``` 

After, run this command: 

```python3 l-system-plotter.py l-system.txt <output file name> 60``` in order to visualize the fractal. 
  
