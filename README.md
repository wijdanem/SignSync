# SignSync
A product for translating American Sign Language (ASL) into text using Machine Learning, Arduino Uno, and OpenCV.

SignSync is a tool designed for use in commercial and service areas to improve accessibility and facilitate seamless communication between ASL-speaking customers and non-ASL-speaking staff. This product will be available to staff working in retail or service spaces. When an ASL-speaking customer wants to place an order, the device can be set up within the rotatable tipping screen or any other pre-installed device. It will capture the customer's hand gestures and movements, translating them into English text that the staff can read to fulfill the customer's request.

Machine Learning
The machine learning component of SignSync utilizes key libraries, including NumPy for numerical operations, OpenCV for image processing, and Keras for building the neural network. A Sequential model is initialized to construct a Convolutional Neural Network (CNN), incorporating layers such as Conv2D, MaxPooling2D, and Dense for gesture recognition. The model is compiled and trained using a dataset of ASL gestures, with data augmentation and preprocessing techniques to enhance performance.

Arduino
The Python script listens for input from the ultrasonic sensor on the breadboard, which detects deliberate movement. Then, when deliberate input is detected (when someone's hands come near the sensor) the Arduino code is executed. This triggers the webcam to open on the laptop and start recording the visual input. The process ends when the user clicks submit (aka, hitting q on the keyboard) and this recording is saved, ready to be processed by the machine learning model.
