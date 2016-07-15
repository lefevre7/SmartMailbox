nt led = 13
int sensor = A0;
int button = A1;
float s_In_Val = 0;
float b_In_Val = 0;
volatile int opened = 0;

void setup() {
  // put your setup code here, to run once:
    pinMode(led, OUTPUT);
      pinMode(sensor, INPUT);
        pinMode(button, INPUT);
	  digitalWrite(sensor, HIGH); // turn on the pullup
	    Serial.begin(9600);// all printing output is for debugging
	    }

	    void loop() {
	      // put your main code here, to run repeatedly:
	        Serial.println("to readSensor:");
		  s_In_Val = analogRead(sensor);
		    Serial.println(s_In_Val);
		      if (s_In_Val < 1000)
		        {
			  opened = 1;
			    Serial.println(opened);
			      Serial.println(s_In_Val);
			        }
				  Serial.println("to readOpen:");
				    Serial.println(opened);
				      if (opened == 1)
				        {
					    digitalWrite(led, HIGH);
					        Serial.println("in write:");
						    Serial.println(opened);
						      }

						        Serial.println("to readButton:");
							  b_In_Val = analogRead(button);
							    Serial.println(b_In_Val);
							      if (b_In_Val > 1000 && opened == 1)
							        {
								  digitalWrite(led, LOW);
								    Serial.println("in button:");
								      Serial.println(opened);
								        opened = 0;
									  Serial.println("after close:");
									    Serial.println(opened);
									      }
									      }
