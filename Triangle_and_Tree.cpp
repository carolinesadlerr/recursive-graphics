#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

std::string binary_tree(int n);
std::string sierpinski(int n);

int main(int argc, char **argv){
    std::ofstream file("l-system.txt");
    file << "+ + + + + + " << binary_tree(atoi(argv[1]));
    file.close();
    return 0;
}

std::string sierpinski(int n){
    if(n == 0){
        return "F + F + F";
    }
    else{
        std::string string;
        for(int i = 0; i < 3; i++){
            string += sierpinski(n - 1);
            string += " + ";
            for(int j = 0; j < pow(2, n); j++){
                string += "F ";
            }
            if(i < 2){
                string += "+ ";
            }
        }
        return string;
    }
}

std::string binary_tree(int n){
    if(n == 0){
        return "F B";
    }
    else{
        std::string string;
        string += binary_tree(n - 1);
        string += " F - ";
        string += binary_tree(n - 1);
        string += " + + ";
        string += binary_tree(n - 1);
        string += " - B ";
        return string;
    }
}