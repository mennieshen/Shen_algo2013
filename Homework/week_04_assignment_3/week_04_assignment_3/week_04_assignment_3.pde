   Eyeball leftEye = new Eyeball();
   Eyeball rightEye = new Eyeball();
   leftEar leftEar = new leftEar();
   rightEar rightEar = new rightEar();
   
   PVector mousePos = new PVector(0,0);


   
void setup() {

  background (255);
  size(700, 700);
  
  leftEar.pos.x = 300;
  leftEar.pos.y = 350*0.5-30;
  rightEar.pos.x = 400;
  rightEar.pos.y = 350*0.5-30;
  
  leftEye.pos.x = 350+75;
  leftEye.pos.y = 350*0.5;
  rightEye.pos.x = 350-75;
  rightEye.pos.y = 350*0.5;
  

}



void draw() {
  background(255);
  
  
   
  
   mousePos.x = mouseX;
   mousePos.y = mouseY;
   
   leftEar.mousePos.x = mousePos.x;
   leftEar.mousePos.y = mousePos.y;
   rightEar.mousePos.x = mousePos.x;
   rightEar.mousePos.y = mousePos.y;
   
   leftEar.draw();
   rightEar.draw();
   
    pushMatrix();
     translate(350, 350);
     fill(255, 0, 0);
     noStroke();
     ellipse(0, 0, 500, 500);
     
   popMatrix(); 
   
   
   
   leftEye.draw();
   rightEye.draw();
   
   
   leftEye.mousePos.x = mousePos.x;
   leftEye.mousePos.y = mousePos.y;
   rightEye.mousePos.x = mousePos.x;
   rightEye.mousePos.y = mousePos.y;
   
   
   
  
}

