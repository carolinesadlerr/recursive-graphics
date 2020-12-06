//koch snowflake
#include <string>
#include <iostream>
#include <fstream>
#include <cmath>
std::string drawFlake(int n);

std::string drawSnowflake(int n){
      // draw starting point
      // appends commands from recursive call to string
      return drawFlake(n) + "- - " + drawFlake(n) + "- - " + drawFlake(n);
}

std::string drawFlake(int n){
      //base case //if 0 move forward to complete fractal
      if (n == 0) {
            return "F ";
      }
      //recursive call//if not 0 call
      else {
            std::string subFlake = drawFlake(n-1);
            return subFlake + "+ " + subFlake + "- - " + subFlake + "+ " + subFlake;
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
      //each time 1 line is split to 4
      std::string Lsystem = drawSnowflake(n);
      save("l-system.txt", Lsystem);
}
