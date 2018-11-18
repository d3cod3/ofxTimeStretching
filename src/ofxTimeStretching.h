#pragma once

#include "RubberBandStretcher.h"

#define DEFAULT_RB_OPTIONS  0x00000000
#define PVOC_RB_OPTIONS     0x01802201

class ofxTimeStretching{
    
    public: 
    
        ofxTimeStretching();
    
        void    setup(int sampleRate, int numChannels);
        void    update();

        void    setTimeRatio(double r);
        void    setPitchScale(double s);


        RubberBand::RubberBandStretcher *rbStretcher;
    
    private:
    
        
    
};




