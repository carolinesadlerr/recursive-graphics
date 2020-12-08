# Recursive Graphics
#Recursive functions using l-systems for the Koch Snowflake, Hilbert Curve, Sierpinski Triangle, Dragon Curve, Sierpinski Curve and Koch Curve. 
##l-system-plotter.py## 
This is a python file used to visualize the C++ files. This is where the l-system commands are read and instruct a "turtle" to move and draw a line creating the fractal. In   order to use this file you must import matplotlib as mpl, import matplotlib.pyplot as plt, import matplotlib.colors as mcolors. In addition, import sys, from math import pi, sin, cos, and from math import isnan. In order the run this and output a file you must enter: python3 l-system-plotter.py l-system.txt <output file name> <degree of turn>. 
  
##Koch Snowflake##
This cpp file writes commands to a text file to produce the Koch Snowflake fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: g++ kochSnowflake.cpp -o ksnowflake && ./ksnowflake <amount of iterations>. After, run this command: python3 l-system-plotter.py l-system.txt <output file name> 60 in order to visualize the fractal. 
  
##Hilbert Curve##
This cpp file writes commands to a text file to produce the Hilbert Curve fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: g++ hCurve.cpp -o hCurve && ./hCurve <amount of iterations>. After, run this command: python3 l-system-plotter.py l-system.txt <output file name> 90 in order to visualize the fractal. 
  

##Sierpinski Triangle##
This cpp file writes commands to a text file to produce the Sierpinski Triangle fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: g++ sTriangle.cpp -o sTriangle && ./sTriangle <amount of iterations>. After, run this command: python3 l-system-plotter.py l-system.txt <output file name> 60 in order to visualize the fractal. 
  

##Dragon Curve##
This cpp file writes commands to a text file to produce the Dragon Curve fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: g++ dCurve.cpp -o dCurve && ./dCurve <amount of iterations>. After, run this command: python3 l-system-plotter.py l-system.txt <output file name> 60 in order to visualize the fractal. 
  

##Sierpinski Curve##
This cpp file writes commands to a text file to produce the Sierpinski Curve fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: g++ sCurve.cpp -o sCurve && ./sCurve <amount of iterations>. After, run this command: python3 l-system-plotter.py l-system.txt <output file name> 60 in order to visualize the fractal. 
  

#Koch Curve##
This cpp file writes commands to a text file to produce the Koch curve fractal. The libraries needed in order to run this are string, iostream, fstream, and cmath. When compiling this file you should use this command: g++ kochCurve.cpp -o kCurve && ./kCurve <amount of iterations>. After, run this command: python3 l-system-plotter.py l-system.txt <output file name> 60 in order to visualize the fractal. 
  
