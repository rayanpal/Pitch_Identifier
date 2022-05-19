# Pitch Identifier

This is a JUCE Module for Pitch Identification.





### Usage



```cpp
// Class members
PitchMPM pitchMPM;     
AudioSampleBuffer sampleBuffer;


pitchMPM.setBufferSize (bufferSize);
pitchMPM.setSampleRate (sampleRate);


float newPitch = pitchMPM.getPitch (sampleBuffer.getReadPointer (0));
```



