//Hilbert Curve
#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

std::string subLineA(int n);
std::string subLineB(int n);

std::string drawCurve(int n){
      //draw starting curve
      return subLineA(n);
}

// left side of the curve
std::string subLineA(int n){
      // base case
      if (n == 0) {
            return "";
      }
      // if not on last iteration create left and right sides & attach them together
      else {
            std::string A = subLineA(n-1);
            std::string B = subLineB(n-1);
            return "- " + B + "F " + "+ " + A + "F " + A + "+ " + "F " + B + "- ";

      }
}

// right side of the curve
std::string subLineB(int n){
      // base case
      if (n == 0) {
            return "";
      }
      // this is where we call the recursive method
      else {
            std::string A = subLineA(n-1);
            std::string B = subLineB(n-1);
            return "+ " + A + "F " + "- " + B + "F " + B + "- " + "F " + A + "+ ";

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
