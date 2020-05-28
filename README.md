# Pitch Identifier

This is a JUCE Module for Pitch Identification.

PitchYIN class based on the YIN implementation found in the [aubio](https://aubio.org) library

PitchMPM class adapted from the McLeod Pitch Method implementation in https://github.com/sevagh/pitch-detection



### Usage

**NOTE:** `bufferSize` should be a power of 2!

```cpp
// Class members
PitchMPM pitchMPM;     
AudioSampleBuffer sampleBuffer;

// Setup / prepare
pitchMPM.setBufferSize (bufferSize);
pitchMPM.setSampleRate (sampleRate);

// Process
float newPitch = pitchMPM.getPitch (sampleBuffer.getReadPointer (0));
```


### TODO
- [ ] Seperate time-based method into another class that can be used as an alternative to the FFT based method
- [ ] Add FFT based YIN implementation (not a priority, MPM works well for my needs - PR's welcome)
- [ ] Create base (virtual) `Pitch` class and add implementations as subclasses.  
- [ ] Add other methods, e.g. Wavelet? 
- [ ] Remove JUCE dependency from implementations so that they can be used on embedded platforms, e.g. Arduino/Teensy. Will also need 'pluggable' FFT methods for this to work. 
