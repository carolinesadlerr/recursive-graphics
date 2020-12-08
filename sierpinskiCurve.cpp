// sierpinski curve
// python3 l-system-plotter.py l-system.txt sCurve.txt 60

#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

std::string subLineA(int n);
std::string subLineB(int n);

std::string drawCurve(int n){
      // draw curve
      return subLineA(n);
}

std::string subLineA(int n){
      // base case left side
      if (n == 0) {
            return "F ";
      }
      // this is where we call the recursive method
      else {
            std::string A = subLineA(n-1);
            std::string B = subLineB(n-1);
            return B + "-" + A + "-" + B;
      }
}

std::string subLineB(int n){
      // base case right side
      if (n == 0) {
            return "F ";
      }
      // this is where we call the recursive method
      else {
            std::string A = subLineA(n-1);
            std::string B = subLineB(n-1);
            return A + "+" + B + "+" + A;
      }
}

void save(std::string filename, std::string Lsystem){
      //write commands to file
      std::ofstream file;
      file.open(filename);
      file << Lsystem;
      file.close();
}


int main(int argc, char **argv){
      //amount of times it iterates
      int n = std::stoi(argv[1]);
      std::string Lsystem = drawCurve(n);
      //save the text file
      save("l-system.txt", Lsystem);
}
