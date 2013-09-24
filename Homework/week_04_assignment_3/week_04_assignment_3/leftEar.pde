class leftEar{
  
  PVector pos = new PVector(0,0);
  PVector mousePos = new PVector(0,0);
  float angle;
  
  void draw(){
    
    pushMatrix();

    translate(pos.x, pos.y);
    
    float dx2 = mousePos.x - pos.x;
    float dy2 = mousePos.y - pos.y;
    
    angle = atan2(dx2, dy2 );
    
    rotate(radians(degrees(-angle))); 
    
    noStroke();
    fill(0,0,255);
    rect(0,20,100,20);
    
    popMatrix();
  
  
  }
  
}
