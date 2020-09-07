#include <cstdlib>
#include "neuron.h"

#define MIN -3
#define MAX 3

Neuron::Neuron(){

}

void Neuron::addForward(Neuron *fw){

}

void Neuron::addBackward(Neuron *bw){

}

float Neuron::getBias(uint16_t i){
    return bias.at(i);
}

float Neuron::getWeight(){
    return weight;
}

std::vector<Neuron*>* Neuron::getFw(){
    return &fw;
}

std::vector<Neuron*>* Neuron::getBw(){
    return &bw;
}

std::vector<float>* Neuron::getBias(){
    return &bias;
}

void Neuron::randInitWeightBias(){
    weight = MIN + static_cast <float> (std::rand()) /( static_cast <float> (RAND_MAX/(MAX-MIN)));
    for (int i = 0; i < fw.size(); i++){
        float rand = MIN + static_cast <float> (std::rand()) /( static_cast <float> (RAND_MAX/(MAX-MIN)));
        bias.push_back(rand);
    }
}