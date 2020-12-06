#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

std::string subLineX(int n);
std::string subLineY(int n);

std::string drawCurve(int n){
      // draw starting curve
      return "F" + subLineX(n);
}

std::string subLineX(int n){
      // base case
      if (n == 1) {
            return "";
      }
      // this is where we call the recursive method
      else {
            std::string X = subLineX(n-1);
            std::string Y = subLineY(n-1);
            return X + "+" + Y + "F" + "+";
      }
}

std::string subLineY(int n){
      // base case
      if (n == 1) {
            return "";
      }
      // this is where we call the recursive method
      else {
            std::string X = subLineX(n-1);
            std::string Y = subLineY(n-1);
            return " - F" + X + "-" + Y;
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