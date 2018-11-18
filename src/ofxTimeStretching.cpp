#include "ofxTimeStretching.h"

ofxTimeStretching::ofxTimeStretching(){

}


void ofxTimeStretching::setup(int sampleRate, int numChannels){
    rbStretcher = new RubberBand::RubberBandStretcher(static_cast<size_t>(sampleRate),static_cast<size_t>(numChannels),DEFAULT_RB_OPTIONS);
}

void ofxTimeStretching::update(){

}

void ofxTimeStretching::setTimeRatio(double r){
    rbStretcher->setTimeRatio(r);
}

void ofxTimeStretching::setPitchScale(double s){
    rbStretcher->setPitchScale(s);
}

