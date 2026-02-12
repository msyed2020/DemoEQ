/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

// ok yeah so tomorrow we're gonna try this out again ok

// remember to actually save the file here princess 

// im a brown rockstar

// ken carson

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
DemoEQAudioProcessorEditor::DemoEQAudioProcessorEditor (DemoEQAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

DemoEQAudioProcessorEditor::~DemoEQAudioProcessorEditor()
{
}

//==============================================================================
void DemoEQAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (juce::FontOptions (15.0f));
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void DemoEQAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
