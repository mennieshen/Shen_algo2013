class Eyeball { 
  
  PVector pos = new PVector(0,0);
  PVector mousePos = new PVector(0,0);
  float angle;
  
 
  
  void draw() { 
    
    pushMatrix();
    
    translate(pos.x, pos.y);
    
    float dx = mousePos.x - pos.x;
    float dy = mousePos.y - pos.y;
    
    angle = atan2(dy, dx );
    
    rotate(radians(degrees(angle))); 
    
    
    noStroke();
    fill(255);
    ellipse(0, 0, 50,50);
    
    stroke(0);
    fill(0);
    ellipse(12.5, 0, 25,25);
    
    
    popMatrix();
    
    
    
  
}   }
