/*
 
 BEGIN_JUCE_MODULE_DECLARATION
  ID:               pitch_identifier
  vendor:           rayanpal
  version:          0.2.0
  name:             Pitch Identifier
  description:      Pitch identification methods
  website:          http://www.github.com/rayanpal/Pitch_Ietector
  license:          MIT
  dependencies:     juce_core, juce_audio_basics, audio_fft
  OSXFrameworks:    
  iOSFrameworks:    
 END_JUCE_MODULE_DECLARATION
 */

#pragma once
#include "AppConfig.h"
#include <juce_core/juce_core.h>
#include <juce_audio_basics/juce_audio_basics.h>
#include <audio_fft/audio_fft.h>
#include <float.h>
#include <complex>

namespace rayanpal {
    
using namespace juce;

#include "source/PitchMPM.h"
#include "source/PitchYIN.h"

}
