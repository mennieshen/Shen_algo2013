//
//  circle.cpp
//  week_03_assignment_3
//
//  Created by MennieShen on 13/9/17.
//
//

#include "circle.h"

circle::circle(){
    
    startAngle = ofRandom(0,TWO_PI);
    
}

void circle::update(){
    
    angle = (ofGetElapsedTimef()*0.05);
}

void circle::draw(){
    
    
        //radius = 50;//50+(i*10);
        
        float x = radius * sin(startAngle+angle);
        float y = radius * cos(startAngle+angle);
        
        ofPoint temp;
        temp.x = x;
        temp.y = y;
        points.push_back(temp);
        
        if (points.size()>40){
            
            points.erase(points.begin());
            
        }
        
        
        ofNoFill();
        ofSetColor(255, 255, 255, 80);
        
        ofBeginShape();
        
        for (int i = 0; i < points.size(); i++){
            
            ofVertex(points[i].x, points[i].y);
        }
        
        ofEndShape();
    

    
}