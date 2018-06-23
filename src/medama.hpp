//
//  medama.hpp
//  helloobject
//
//  Created by 田嶋智洋 on 2018/06/23.
//

#ifndef medama_hpp
#define medama_hpp

#include <stdio.h>
#include "ofMain.h"

class Medama{
    public :
        //property
        float size;
        ofColor color;
        ofVec2f pos;
        ofVec2f vel;
    
    
        //初期値の設定 constructor
        Medama();
    
    
        //method
        void setup();
        void update();
        void draw();
    void setColor(ofColor col);
    void setSize(float val);
};

#endif /* medama_hpp */
