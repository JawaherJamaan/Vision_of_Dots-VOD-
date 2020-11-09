//r yello
//l green
#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial BTserial(52, 53); // RX | TX
char c;
String state;

 Servo S1;
 Servo S2;
 Servo S3;
 Servo S4;
 Servo S5;
 Servo S6;
 Servo S7;
 Servo S8;
 Servo S9;
 Servo S10;
 Servo S11;
 Servo S12;
 Servo S13;
 Servo S14;
 Servo S15;
 Servo S16;
 Servo S17;
 Servo S18;
 Servo S19;
 Servo S20;
 Servo S21;
 Servo S22;
 Servo S23;
 Servo S24;
 Servo S25;
 Servo S26;
 Servo S27;
 Servo S28;
 Servo S29;
 Servo S30;
 
int place;

 int S1D =100;
 int S1U =93;
   
 int S2D =100;  
 int S2U = 90;

 int S3D =104; 
 int S3U =93;

 int S4D =102; 
 int S4U =95;

 int S5D =92;  
 int S5U =84;

 int S6D =92;  
 int S6U = 85;

 int S7D =88; 
 int S7U =97;

 int S8D =87;  
 int S8U =95;

 int S9D =91;  
 int S9U =102;

 int S10D =82;  
 int S10U =92;

 int S11D =95;  
 int S11U =104;

 int S12D =99;  
 int S12U =106;

 int S13D =103;  
 int S13U =109;

 int S14D =98;  
 int S14U =103;

 int S15D =95;  
 int S15U =104;

 int S16D =95;  
 int S16U =102;

 int S17D =99;  
 int S17U =106;

 int S18D =93; 
 int S18U =100;

 int S19D =92;  
 int S19U =101;

 int S20D =86; 
 int S20U =94;

 int S21D =92;  
 int S21U =102;

 int S22D =100; 
 int S22U =108;

 int S23D =98;  
 int S23U =108;

 int S24D =98;  
 int S24U =108;

 int S25D =69;  
 int S25U =62;

 int S26D =92;  
 int S26U =84;

 int S27D =98;  
 int S27U =90;

 int S28D =98;  
 int S28U =88;

 int S29D =104; 
 int S29U =94;

 int S30D =92; 
 int S30U =85;

void setup() 
{
 S1.attach(31); 
  S1.write(S1D);

  S2.attach(2); 
  S2.write(S2D);

  S3.attach(3); 
  S3.write(S3D);

  S4.attach(4); 
  S4.write(S4D);

  S5.attach(5); 
  S5.write(S5D);

  S6.attach(6); 
  S6.write(S6D);

  S7.attach(7); 
  S7.write(S7D);

  S8.attach(8); 
  S8.write(S8D);

  S9.attach(9); 
  S9.write(S9D);

  S10.attach(10); 
  S10.write(S10D);

  S11.attach(11); 
  S11.write(S11D);

  S12.attach(12); 
  S12.write(S12D);

  S13.attach(13); 
  S13.write(S13D);

  S14.attach(14); 
  S14.write(S14D);

  S15.attach(15); 
  S15.write(S15D);

  S16.attach(16); 
  S16.write(S16D);

  S17.attach(17); 
  S17.write(S17D);

  S18.attach(18); 
  S18.write(S18D);

  S19.attach(19); 
  S19.write(S19D);

  S20.attach(20); 
  S20.write(S20D);

  S21.attach(21); 
  S21.write(S21D);

  S22.attach(22); 
  S22.write(S22D);

  S23.attach(23); 
  S23.write(S23D);

  S24.attach(24); 
  S24.write(S24D);

  S25.attach(25); 
  S25.write(S25D);

  S26.attach(26); 
  S26.write(S26D);

  S27.attach(27); 
  S27.write(S27D);

  S28.attach(28); 
  S28.write(S28D);

  S29.attach(29); 
  S29.write(S29D);

  S30.attach(30); 
  S30.write(S30D);

Serial.begin(9600);
Serial.println("Arduino is ready");

// HC-05 default serial speed for commincation mode is 9600
BTserial.begin(9600);  
}

void loop()
{
if (BTserial.available())
{  
    c = BTserial.read();
    
   //Serial.write(c);
 state+=c;
 

}

 for(int i=0;i<state.length();i++){
//Serial.println(state);
      if (state.charAt(i)=='1'){
  
                if(i==0){
                Serial.print(i);
                S3.write(93); 
              } else if(i==1){
                 S12.write(S12U);             
              } else if(i==2){
                S13.write(S13U);           
              } else if(i==3){
                 S24.write(S24U);             
              } else if(i==4){
                 S28.write(S28U);             
               }
   
  }//end of 1

  else if(state.charAt(i)=='2'){
  //3-2,12-11,13-14,24-23,28-29
  
  if(i==0){
 S2.write(S2U);  
 S3.write(S3U);            
  }else if(i==1){
     S11.write(S11U);             
     S12.write(S12U);             
  }else if(i==2){
     S13.write(S13U);             
     S14.write(S14U);             
  }else if(i==3){
    S23.write(S23U);             
    S24.write(S24U);             
  }else  if(i==4){
     S28.write(S28U);             
     S29.write(S29U);             
   }
  
 }//end of 2
 else if(state.charAt(i)=='3'){
  //1-2-5-6,10-11-9-8,15-14-16-17,22-23-20-21,30-29-25-26
  if(i==0){
 S1.write(S1U);    
 S2.write(S2U);
 S5.write(S5U);
 S6.write(S6U);
 
  }else if(i==1){
   S8.write(S8U);             
   S9.write(S9U);             
   S10.write(S10U);             
   S11.write(S11U);  
              
}else if(i==2){
    S14.write(S14U);  
    S15.write(S15U);  
    S16.write(S16U);  
    S17.write(S17U); 
                
}else if(i==3){
    S20.write(S20U);  
    S21.write(S21U); 
    S22.write(S22U);
    S23.write(S23U);  
               
}else if(i==4){
    S25.write(S25U); 
    S26.write(S26U);      
    S29.write(S29U);   
   S30.write(S30U);             
}
}//end of 3
 else if(state.charAt(i)=='4'){
//3-6-5-4,12-9-8-7,13-16-17-18,24-21-20-19,28-25-26-27
if(i==0){
  S3.write(S3U);       
  S4.write(S4U);        
  S5.write(S5U);      
  S6.write(S6U);   
            
}else if(i==1){
    S7.write(S7U); 
    S8.write(S8U);    
    S9.write(S9U);     
    S12.write(S12U); 
                
 }else if(i==2){
    S13.write(S13U);       
    S16.write(S16U);    
    S17.write(S17U);   
    S18.write(S18U);  
    
 }else if(i==3){
     S19.write(S19U);    
     S20.write(S20U);    
     S21.write(S21U);      
     S24.write(S24U);  
                
 }else if(i==4){
 S25.write(S25U);    
 S26.write(S26U);    
 S27.write(S27U);     
 S28.write(S28U);             
 }}
 //end of 4
 else if(state.charAt(i)=='5'){
  //2-5-6,11-8-9,14-17-16,23-20-21,29-26-25
  if(i==0){
     S2.write(S2U);   
     S5.write(S5U);  
     S6.write(S6U);  
                
}else if(i==1){
     S8.write(S8U);   
     S9.write(S9U);      
     S11.write(S11U); 
                 
}else if(i==2){
    S14.write(S14U); 
    S16.write(S16U); 
    S17.write(S17U);  
               
}else if(i==3){
    S20.write(S20U);   
    S21.write(S21U);  
    S23.write(S23U);
                 
}else if(i==4){
    S25.write(S25U);       
    S26.write(S26U);  
    S29.write(S29U);             
}}
//end of 5
else if(state.charAt(i)=='6'){
  //3-5-4,12-8-7,17-18-13,20-19-24,27-26-28
  if(i==0){
   S3.write(S3U);  
   S4.write(S4U);  
   S5.write(S5U); 
               
 }else if(i==1){
   S7.write(S7U);  
   S8.write(S8U);   
   S12.write(S12U); 
               
}else if(i==2){
    S13.write(S13U);   
    S17.write(S17U);  
    S18.write(S18U);    
             
}else if(i==3){
   S19.write(S19U);      
   S20.write(S20U);    
   S24.write(S24U);  
                
}else if(i==4){
     S26.write(S26U);     
     S27.write(S27U);  
     S28.write(S28U);             
}}
//end of 6
else if(state.charAt(i)=='7'){
  //3-6-1-4,12-9-10-7,13-16-15-18,24-21-22-19,28-25-30-27
  if(i==0){
   S1.write(S1U);          
   S3.write(S3U);      
   S4.write(S4U);   
   S6.write(S6U); 
               
}else if(i==1){
    S7.write(S7U);     
    S9.write(S9U);      
    S10.write(S10U);  
    S12.write(S12U);
                 
}else if(i==2){
   S13.write(S13U);        
   S15.write(S15U);      
   S16.write(S16U);   
   S18.write(S18U);
                
}else if(i==3){
 S19.write(S19U);   
 S21.write(S21U);    
 S22.write(S22U);    
 S24.write(S24U);  
            
}else if(i==4){
 S25.write(S25U);  
 S27.write(S27U);    
 S28.write(S28U);  
 S30.write(S30U);             
} }
//end of 7
else if(state.charAt(i)=='8'){
  //3-6-5,12-9-8,13-16-17,24-21-20,28-25-26
  if(i==0){
     S3.write(S3U); 
     S5.write(S5U);  
     S6.write(S6U); 
                 
}else if(i==1){
    S8.write(S8U); 
    S9.write(S9U);  
    S12.write(S12U); 
                
}else if(i==2){
    S13.write(S13U);   
    S16.write(S16U);     
    S17.write(S17U); 
                
}else if(i==3){
 S20.write(S20U); 
 S21.write(S21U);  
 S24.write(S24U);  
            
}else if(i==4){
 S25.write(S25U);  
 S26.write(S26U);   
 S28.write(S28U);  
            
}}
//end of 8
else if(state.charAt(i)=='9'){
 //1-2-4-6,10-11-9-7,14-15-16-18,23-22-21-19,29-30-25-27
 if(i==0){
 S1.write(S1U);    
 S2.write(S2U);    
 S4.write(S4U);  
 S6.write(S6U);}

 else if(i==1){
 S7.write(S7U);   
 S9.write(S9U);     
 S10.write(S10U);   
 S11.write(S11U);}
 
 else if(i==2){
 S14.write(S14U);
 S15.write(S15U);  
 S16.write(S16U);  
 S18.write(S18U);}
 
 else if(i==3){
 S19.write(S19U);  
 S21.write(S21U);    
 S22.write(S22U);   
 S23.write(S23U);}
 
 else if(i==4){
 S25.write(S25U); 
 S27.write(S27U);   
 S29.write(S29U);   
 S30.write(S30U);}
 }
 //end of 9
 else if(state.charAt(i)=='0'){
 //1-2-3-5,12-11-10-8,13-14-15-17,24-23-22-20,28-29-30-26
 if(i==0){
 S1.write(S1U);      
 S2.write(S2U);       
 S3.write(S3U);       
 S5.write(S5U);}
 
 else if(i==1){
 S8.write(S8U);   
 S10.write(S10U);    
 S11.write(S11U); 
 S12.write(S12U);}
 
 else if(i==2){
 S13.write(S13U);  
 S14.write(S14U);      
 S15.write(S15U);     
 S17.write(S17U);}
 
 else if(i==3){
 S20.write(S20U);    
 S22.write(S22U);    
 S23.write(S23U);    
 S24.write(S24U);}
 
 else if(i==4){
 S26.write(S26U);    
 S28.write(S28U);    
 S29.write(S29U); 
 S30.write(S30U);}
 }//end of 0
  else if(state.charAt(i)=='a'){
 //3-1-4-5,12-8-7-10,13-17-18-15,24-20-19-22,28-26-27-30

 if(i==0){
 S1.write(S1U);    
 S3.write(S3U);        
 S4.write(S4U);      
 S5.write(S5U);}
 
 else if(i==1){
 S7.write(S7U);
 S8.write(S8U);    
 S10.write(S10U);    
 S12.write(S12U);}
 
 else if(i==2){
 S13.write(S13U); 
 S15.write(S15U);  
 S17.write(S17U);  
 S18.write(S18U);}
 
 else if(i==3){
 S19.write(S19U); 
 S20.write(S20U); 
 S22.write(S22U);  
 S24.write(S24U);}             

 else if(i==4){
 S26.write(S26U);   
 S27.write(S27U);    
 S28.write(S28U);   
 S30.write(S30U);}
              
 }//end of a
 else if(state.charAt(i)=='b'){
 //1-2-6,10-11-9,14-15-16,23-22-21,30-29-25
 if(i==0){
 S1.write(S1U);   
 S2.write(S2U);   
 S6.write(S6U);}             

 else if(i==1){
 S9.write(S9U);    
 S10.write(S10U);    
 S11.write(S11U);}   

 else if(i==2){
 S14.write(S14U); 
 S15.write(S15U);    
 S16.write(S16U);}             

 else if(i==3){
 S21.write(S21U); 
 S22.write(S22U);  
 S23.write(S23U);}   
    
 else if(i==4){
 S25.write(S25U); 
 S29.write(S29U);   
 S30.write(S30U);}
  
 }//end b
 else if(state.charAt(i)=='c'){
 //3-6-4,12-9-7,13-16-18,24-21-19,28-25-27
 if(i==0){
 S3.write(S3U);
 S4.write(S4U);    
 S6.write(S6U);}   
    
 else if(i==1){
 S7.write(S7U);
 S9.write(S9U);   
 S12.write(S12U);} 

 else if(i==2){
 S13.write(S13U);  
 S16.write(S16U);  
 S18.write(S18U);}  
    
 else if(i==3){
 S19.write(S19U);   
 S21.write(S21U);   
 S24.write(S24U); } 
    
 else if(i==4){
 S25.write(S25U);   
 S27.write(S27U);    
 S28.write(S28U);}  
}//end of c
else if(state.charAt(i)=='d'){
 //3-2-1-6-4,9-12-11-10-7,16-13-14-15-18,21-24-23-22-19,25-28-29-30-27
 if(i==0){
 S1.write(S1U); 
 S2.write(S2U);   
 S3.write(S3U);  
 S4.write(S4U); 
 S6.write(S6U);}  
    
 else if(i==1){
 S7.write(S7U);  
 S9.write(S9U);    
 S10.write(S10U); 
 S11.write(S11U); 
 S12.write(S12U);}   

 else if(i==2){
 S13.write(S13U);   
 S14.write(S14U);      
 S15.write(S15U);    
 S16.write(S16U);    
 S18.write(S18U);}     
    
 else if(i==3){
 S19.write(S19U);  
 S21.write(S21U);      
 S22.write(S22U);    
 S23.write(S23U);    
 S24.write(S24U);} 
   
 else if(i==4){
 S25.write(S25U);   
 S27.write(S27U);     
 S28.write(S28U);     
 S29.write(S29U);      
 S30.write(S30U);}  
 
 }//end of c
 else if(state.charAt(i)=='e'){

 //6-3-2-4,9-12-11-7,16-13-14-18,21-24-23-19,25-28-29-27
 if(i==0){
 S2.write(S2U); 
 S3.write(S3U);     
 S4.write(S4U);   
 S6.write(S6U);} 
 
 else if(i==1){
 S7.write(S7U); 
 S9.write(S9U);   
 S11.write(S11U);  
 S12.write(S12U);}  
    
 else if(i==2){
 S13.write(S13U);  
 S14.write(S14U); 
 S16.write(S16U);  
 S18.write(S18U);}  

 else if(i==3){
 S19.write(S19U); 
 S21.write(S21U);    
 S23.write(S23U);    
 S24.write(S24U);}    
 
 else if(i==4){
 S25.write(S25U);   
 S27.write(S27U);  
 S28.write(S28U);  
 S29.write(S29U);}      
 }//end of e
 else if(state.charAt(i)=='f'){
 //6-5-4-2-1,9-8-7-11-10,16-17-18-14-15,21-20-19-22-23,25-26-27-30-29
 if(i==0){  
 S1.write(S1U);   
 S2.write(S2U);    
 S4.write(S4U);   
 S5.write(S5U); 
 S6.write(S6U);}  
 
 else if(i==1){
 S7.write(S7U);  
 S8.write(S8U);   
 S9.write(S9U);     
 S10.write(S10U);  
 S11.write(S11U);} 

 else if(i==2){
 S14.write(S14U);
 S15.write(S15U);    
 S16.write(S16U);   
 S17.write(S17U);  
 S18.write(S18U);}    
    
 else if(i==3){ 
 S19.write(S19U); 
 S20.write(S20U); 
 S21.write(S21U); 
 S22.write(S22U);  
 S23.write(S23U);} 
    
 else if(i==4){   
 S25.write(S25U);   
 S26.write(S26U);  
 S27.write(S27U);    
 S29.write(S29U);   
 S30.write(S30U);}  
}// end of f
else if(state.charAt(i)=='g'){
  //3-2-1-6-5-4,12-11-10-7-8-9,13-14-15-16-17-18,19-20-21-22-23-24,25-26-27-28-29-30
  if(i==0){
 S1.write(S1U);   
 S2.write(S2U);     
 S3.write(S3U);    
 S4.write(S4U);   
 S5.write(S5U); 
 S6.write(S6U);}
 
 else if(i==1){
 S7.write(S7U); 
 S8.write(S8U);   
 S9.write(S9U);     
 S10.write(S10U);   
 S11.write(S11U); 
 S12.write(S12U);}
 
  else if(i==2){
 S13.write(S13U);    
 S14.write(S14U); 
 S15.write(S15U); 
 S16.write(S16U);  
 S17.write(S17U);   
 S18.write(S18U);}   
 
 else if(i==3){
 S19.write(S19U);   
 S20.write(S20U);      
 S21.write(S21U);    
 S22.write(S22U);      
 S23.write(S23U);      
 S24.write(S24U);}    

 else if(i==4){
 S25.write(S25U); 
 S26.write(S26U);      
 S27.write(S27U);        
 S28.write(S28U);      
 S29.write(S29U);       
 S30.write(S30U);}
  
 }//end of g
 else if(state.charAt(i)=='h'){
  //1-2-3-4-5,10-11-12-7-8,13-14-15-17-18,20-19-22-23-24,27-26-28-29-30
  if(i==0){
 S1.write(S1U); 
 S2.write(S2U);     
 S3.write(S3U);     
 S4.write(S4U);   
 S5.write(S5U);  
 
  } else if(i==1){
 S7.write(S7U);  
 S8.write(S8U);     
 S10.write(S10U);   
 S11.write(S11U);   
 S12.write(S12U);}   
 
 else if(i==2){
 S13.write(S13U);   
 S14.write(S14U);    
 S15.write(S15U);    
 S17.write(S17U);    
 S18.write(S18U);}    
 
 else if(i==3){  
 S19.write(S19U);     
 S20.write(S20U);      
 S22.write(S22U);      
 S23.write(S23U);    
 S24.write(S24U);}   

 else if(i==4){
 S26.write(S26U);      
 S27.write(S27U);      
 S28.write(S28U);   
 S29.write(S29U);    
 S30.write(S30U);}
  
 }//end of h
 else if(state.charAt(i)=='i'){
  //3-2-4,12-11-7,13-14-18,24-23-19,28-29-27
  if(i==0){
  S2.write(S2U); 
  S3.write(S3U);   
  S4.write(S4U);}
    
  else if(i==1){
  S7.write(S7U);    
  S11.write(S11U);   
  S12.write(S12U);}  
  
  else if(i==2){
  S13.write(S13U); 
  S14.write(S14U);  
  S18.write(S18U);}    
    
  else if(i==3){
  S19.write(S19U);  
  S23.write(S23U);   
  S24.write(S24U);}   
  
  else if(i==4){
  S27.write(S27U);  
  S28.write(S28U);   
  S29.write(S29U);}   
 
 }//end of i
 else if(state.charAt(i)=='j'){
  //2-3-6,11-12-9,14-13-16,23-24-21,29-28-25
  if(i==0){
  S2.write(S2U);  
  S3.write(S3U);    
  S6.write(S6U);}  
    
  else if(i==1){  
  S9.write(S9U);  
  S11.write(S11U);   
  S12.write(S12U);}   
    
  else if(i==2){
  S13.write(S13U); 
  S14.write(S14U);     
  S16.write(S16U);}   

  else if(i==3){
  S21.write(S21U);   
  S23.write(S23U);   
  S24.write(S24U);} 
  
  else if(i==4){
  S25.write(S25U);  
  S28.write(S28U);    
  S29.write(S29U);}
  
 }//end of j
 
 else if(state.charAt(i)=='k'){
  //1-2-3-5-6,10-11-12-8-9,13-14-15-16-17,24-23-22-20-21,28-29-30-25-26
  if(i==0){
  S1.write(S1U);
  S2.write(S2U);    
  S3.write(S3U);   
  S5.write(S5U);  
  S6.write(S6U);}  
    
  else if(i==1){
  S8.write(S8U);  
  S9.write(S9U);    
  S10.write(S10U);  
  S11.write(S11U); 
  S12.write(S12U);}  
  
  else if(i==2){
  S13.write(S13U); 
  S14.write(S14U);    
  S15.write(S15U);   
  S16.write(S16U);   
  S17.write(S17U);}  
  
  else if(i==3){
    S20.write(S20U);
 S21.write(S21U);    
 S22.write(S22U);     
 S23.write(S23U);   
 S24.write(S24U);   
 
  }else if(i==4){
 S25.write(S25U);    
 S26.write(S26U);       
 S28.write(S28U);      
 S29.write(S29U);   
 S30.write(S30U);}
  
 }//end of k 
 else if(state.charAt(i)=='l'){
  //3-1,12-10,13-15,24-22,28-30
  if(i==0){
  S1.write(S1U); 
  S3.write(S3U);} 
    
  else if(i==1){
  S10.write(S10U); 
  S12.write(S12U);}   
  
  else if(i==2){
  S13.write(S13U); 
  S15.write(S15U);}     
    
  else if(i==3){
  S22.write(S22U);  
  S24.write(S24U);}   
             
  else if(i==4){
  S28.write(S28U); 
  S30.write(S30U);}
  
 }//end if i 
 else if(state.charAt(i)=='m'){
 //1-2-3,10-11-12,13-14-15,22-23-24,28-29-30
 if(i==0){
 S1.write(S1U); 
 S2.write(S2U);   
 S3.write(S3U);}  
 
 else if(i==1){
 S10.write(S10U);   
 S11.write(S11U);    
 S12.write(S12U);}
 
 else if(i==2){
 S13.write(S13U);  
 S14.write(S14U);   
 S15.write(S15U);}    
    
 else if(i==3){
 S22.write(S22U);   
 S23.write(S23U);   
 S24.write(S24U);}    
    
 else if(i==4){
 S28.write(S28U);  
 S29.write(S29U);  
 S30.write(S30U);}       
 
  
 }//end for m 
 else if(state.charAt(i)=='n'){
  //3-6-1,12-9-10,13-16-15,24-21-22,28-25-30
  if(i==0){
 S1.write(S1U); 
 S3.write(S3U);  
 S6.write(S6U);}  
    
 else if(i==1){
 S9.write(S9U);   
 S10.write(S10U); 
 S12.write(S12U);}   
    
 else if(i==2){
 S13.write(S13U);
 S15.write(S15U);     
 S16.write(S16U);}    
    
 else if(i==3){
 S21.write(S21U);   
 S22.write(S22U);   
 S24.write(S24U);}  
    
 else if(i==4){
 S25.write(S25U);    
 S28.write(S28U);  
 S30.write(S30U);}
  
 }//end of n 
 else if(state.charAt(i)=='o'){
  //3-6-5-1,12-9-8-10,13-16-17-15,24-21-20-22,28-25-26-30
 if(i==0){
 S1.write(S1U);
 S3.write(S3U);   
 S5.write(S5U); 
 S6.write(S6U);}   
    
 else if(i==1){
 S8.write(S8U);  
 S9.write(S9U);     
 S10.write(S10U);   
 S12.write(S12U);}  
    
 else if(i==2){
 S13.write(S13U);
 S15.write(S15U);      
 S16.write(S16U);   
 S17.write(S17U);}    
    
 else if(i==3){
 S20.write(S20U); 
 S21.write(S21U);    
 S22.write(S22U);  
 S24.write(S24U);}  
    
 else if(i==4){
 S25.write(S25U); 
 S26.write(S26U);    
 S28.write(S28U);    
 S30.write(S30U);} 
  
  
 }//end for o 
 else if(state.charAt(i)=='p'){
  
  //3-2-5,12-11-8,13-14-17,24-23-20,28-29-26
  if(i==0){
  S2.write(S2U); 
  S3.write(S3U);  
  S5.write(S5U);}   
  
  else if(i==1){
  S8.write(S8U);  
  S11.write(S11U);   
  S12.write(S12U);}   
 
  else if(i==2){
  S13.write(S13U);  
  S14.write(S14U);  
  S17.write(S17U);}    
    
  else if(i==3){
  S20.write(S20U); 
  S23.write(S23U);  
  S24.write(S24U);}
  
  else if(i==4){
  S26.write(S26U); 
  S28.write(S28U);  
  S29.write(S29U);}
  
 }//end for q
 else if(state.charAt(i)=='q'){
  //6-5-4-2,7-8-9-11,16-17-18-14,19-20-21-23,25-26-27-29
  if(i==0){
  S2.write(S2U);  
  S4.write(S4U);    
  S5.write(S5U);    
  S6.write(S6U);}   
    
  else if(i==1){
  S7.write(S7U); 
  S8.write(S8U);    
  S9.write(S9U);  
  S11.write(S11U);}    
  
  else if(i==2){
  S14.write(S14U); 
  S16.write(S16U);     
  S17.write(S17U);    
  S18.write(S18U);}   
    
  else if(i==3){
 S19.write(S19U);  
 S20.write(S20U);    
 S21.write(S21U);    
 S23.write(S23U);    
    
  }else if(i==4){
     S25.write(S25U); 
 S26.write(S26U);    
 S27.write(S27U);    
 S29.write(S29U); 
    
  }
  
 }//end of q
 else if(state.charAt(i)=='r'){
  
  //6-2,9-11,16-14,21-23,29-25
  if(i==0){
    S2.write(S2U); 
 S6.write(S6U);   
    
  }else if(i==1){
    S9.write(S9U);   
 S11.write(S11U);    
    
  }else if(i==2){
     S14.write(S14U); 
 S16.write(S16U);     
    
  }else if(i==3){
     S21.write(S21U);  
 S23.write(S23U);       
    
  }else if(i==4){
    S25.write(S25U);  
 S29.write(S29U);     
    
  }
  
 }

 
}


/*

  for(int i=0;i<state.length();i++){

 
  /*
 
  S1.write(S1D);

 
  S2.write(S2D);

 
  S3.write(S3D);

  S4.write(S4D);


  S5.write(S5D);

  S6.write(S6D);


  S7.write(S7D);


  S8.write(S8D);

  
  S9.write(S9D);


  S10.write(S10D);


  S11.write(S11D);

 
  S12.write(S12D);


  S13.write(S13D);
  

  S14.write(S14D);


  S15.write(S15D);
  

  S16.write(S16D);


  S17.write(S17D);


  S18.write(S18D);


  S19.write(S19D);


  S20.write(S20D);
  

  S21.write(S21D);
  

  S22.write(S22D);


  S23.write(S23D);


  S24.write(S24D);


  S25.write(S25D);


  S26.write(S26D);


  S27.write(S27D);


  S28.write(S28D);


  S29.write(S29D);


  S30.write(S30D);
  */



}
