// sierpinski triangle

#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

std::string triangleA(int n);

std::string triangleB(int n);

std::string drawTriangle(int n){
      //attach different segments together to create full snowflake
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

std::string triangleB(int n){
      // base case
      if (n == 0) {
            return "F ";
      }
      // this is where we call the recursive method
      else {
            std::string A = triangleA(n-1);
            std::string B = triangleB(n-1);
            //triangleA already concatenates strings A and B //just concatenate B twice to get both sides
            return B + B;
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
      std::string Lsystem = drawTriangle(n);
     // save("triangle" + std::to_string(n) + ".txt", Lsystem);
      save("l-system.txt", Lsystem);

}
