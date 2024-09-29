const int trigPin = 2;   // Trigger pin connected to D2
const int echoPin = 3;   // Echo pin connected to D3
const int thresholdDistance = 10; // Distance threshold in centimeters

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.println("Ultrasonic Sensor Initialized");
}

void loop() {
  long duration;
  int distance;

  // Trigger the sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo pin (duration of sound wave travel)
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  distance = duration * 0.034 / 2;

  // Output the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the object is within the threshold distance
  if (distance < thresholdDistance) {
    Serial.println("Object detected within threshold distance!");
    Serial.println("START_WEBCAM"); // Send signal to start webcam
    delay(1000); // Wait 1 second to avoid multiple triggers
  }

  // Small delay between readings
  delay(500);
}
