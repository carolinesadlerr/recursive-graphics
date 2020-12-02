// sierpinski triangle

#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

std::string triangleA(int n);

std::string triangleB(int n);

std::string drawTriangle(int n){

      return triangleA(n) + "+ " + triangleB(n) + "+ " + triangleB(n);
}

std::string triangleA(int n){
      // base case
      if (n == 0) {
            return "F ";
      }
      // this is where we call the recursive method
      else {
            std::string A = triangleA(n-1);
            std::string B = triangleB(n-1);
            return A + "+ " + B + "- " + A + "- " + B + "+ " + A;
      }
}
//F−G−G
//rules : (F → F−G+F+G−F), (G → GG)
// + is left, - is right
// F and G both draw

std::string triangleB(int n){
      // base case
      if (n == 0) {
            return "F ";
      }
      // this is where we call the recursive method
      else {
            std::string A = triangleA(n-1);
            std::string B = triangleB(n-1);
            return B + B;
      }
}

void save(std::string filename, std::string Lsystem){
      std::ofstream file;
      file.open(filename);
      file << Lsystem;
      file.close();
      // std::cout << std::endl;
}


int main(int argc, char **argv){
      //amount of times it goes
      int n = std::stoi(argv[1]);
      std::string Lsystem = drawTriangle(n);
      save("triangle" + std::to_string(n) + ".txt", Lsystem);
      save("l-system.txt", Lsystem);
      //std::cout << Lsystem;
      //each time 1 line is split to 4

      //draw triangle

      //divide each side by 3
      //draw triangle on each side attached to the 2 points
      //divide those sides by 3

}