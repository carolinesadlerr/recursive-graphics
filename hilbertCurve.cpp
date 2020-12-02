#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

std::string subLineA(int n);
std::string subLineB(int n);

std::string drawTriangle(int n){
      // this is F
      return subLineA(n);
}

std::string subLineA(int n){
      // base case
      if (n == 1) {
            return "";
      }
      // this is where we call the recursive method
      else {
            std::string A = subLineA(n-1);
            std::string B = subLineB(n-1);
            return "- " + B + "F " + "+ " + A + "F " + A + "+ " + "F " + B + "- ";

      }
}

//A → +BF−AFA−FB+

std::string subLineB(int n){
      // base case
      if (n == 1) {
            return "";
      }
      // this is where we call the recursive method
      else {
            std::string A = subLineA(n-1);
            std::string B = subLineB(n-1);
            return "+ " + A + "F " + "- " + B + "F " + B + "- " + "F " + A + "+ ";

      }
}
//B → −AF+BFB+FA−

void save(std::string filename, std::string Lsystem){
      std::ofstream file;
      file.open(filename);
      file << Lsystem;
      file.close();

}


int main(int argc, char **argv){
      //amount of times it goes
      int n = std::stoi(argv[1]);
      std::string Lsystem = drawTriangle(n);
      save("hilbert" + std::to_string(n) + ".txt", Lsystem);
      save("l-system.txt", Lsystem);
      //std::cout << Lsystem;
      //each time 1 line is split to 4

      //draw triangle

      //divide each side by 3
      //draw triangle on each side attached to the 2 points
      //divide those sides by 3

}