/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PFMProject0v2AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    PFMProject0v2AudioProcessorEditor (PFMProject0v2AudioProcessor&);
    ~PFMProject0v2AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PFMProject0v2AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PFMProject0v2AudioProcessorEditor)
};
