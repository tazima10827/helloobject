//
//  medama.cpp
//  helloobject
//
//  Created by 田嶋智洋 on 2018/06/23.
//

#include "medama.hpp"

Medama::Medama(){
    size = 10.0;
    color = ofColor(0);
    pos = ofVec2f(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
    vel = ofVec2f(ofRandom(-2,2),ofRandom(2,2));
    
}

void Medama::setup(){
    
}

void Medama::update(){
    pos += vel;
    
    size = 50 * sin(ofGetFrameNum());
    
    if(pos.x < 0) pos.x = ofGetWidth();
    if(pos.x > ofGetWidth()) pos.x = 0;
    if(pos.y < 0) pos.y = ofGetHeight();
    if(pos.y > ofGetHeight()) pos.y = 0;
    
}

void Medama::draw(){
    ofSetColor(255, 255, 255);
    ofDrawCircle(pos.x, pos.y, size);
    
    ofSetColor(color);
    ofDrawCircle(pos.x, pos.y, size/2);
}

void Medama::setColor(ofColor col){
    color = col;
}

void Medama::setSize(float val){
    size = val;
}
