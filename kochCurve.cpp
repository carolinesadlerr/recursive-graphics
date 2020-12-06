#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

std::string subLine(int n);

std::string drawCurve(int n){
      //draw starting point of the curve
      return subLine(n);
}
std::string subLine(int n){
      // base case //if on last iteration go forward to complete the fractal
      if (n == 0) {
            return "F";
      }
      // this is where we call the recursive method
      else {
            std::string subLineF = subLine(n-1);
            return subLineF + "+" + subLineF + "-" + subLineF + "-" + subLineF + "+" + subLineF;
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
      //amount of times it goes
      int n = std::stoi(argv[1]);
      std::string Lsystem = drawCurve(n);
      save("l-system.txt", Lsystem);
}