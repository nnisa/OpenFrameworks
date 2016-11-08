//
//  ParticleSystem.h
//  mySugarSketch
//
//  Created by Noshin Anjum Nisa on 11/7/16.
//
//

#ifndef __mySugarSketch__ParticleSystem__
#define __mySugarSketch__ParticleSystem__

#include <stdio.h>

#endif /* defined(__mySugarSketch__ParticleSystem__) */

#pragma once
#include "ofMain.h"
#include "Particle.h"

class ParticleSystem{
public:
    
    void setup();
    void update();
    void draw();
    
    //declaring the particle so that te constructor knows 
    Particle mParticle;
    
};