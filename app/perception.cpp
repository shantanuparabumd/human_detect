/* Copyright 2022
 * Author(s) Po-Yu Huang, Aman Sharma, Shantanu
 *
 */
#include "../include/perception.hpp"

void Human_Tracker::setInput(std::string Videodirectory) {
    this->videodirectory = Videodirectory;
}

std::string Human_Tracker::getInput() {
    return videodirectory;
}

Human_Tracker::Human_Tracker(){} 
Human_Tracker::~Human_Tracker(){}

Camera::Camera(){}
Camera::~Camera(){}

int Camera::LoadVideo(){
    return 1;
}

Detector::Detector(){}
Detector::~Detector(){}

bool Detector::DetectorSystem(){
    return true;
}

int Detector::CoordinateTransform(){
    return 0;
}

int Detector::DrawBoundingBox(){
    return 0;
}