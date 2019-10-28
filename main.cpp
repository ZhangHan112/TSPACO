#include"TSPACO.h"

int main(int argc,char** argv){
    int Iteration = atoi(argv[1]);
    int AntNumber = atoi(argv[2]);
    double Evaporation = atof(argv[3]);
    int Run = atoi(argv[4]);

    TSPACO aco(Iteration,AntNumber,Evaporation,Run);
    aco.ACO();
}