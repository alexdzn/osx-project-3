//
//  AppDelegate.h
//  iDNA
//
//  Created by Alexander Shvets on 24.12.12.
//  Copyright (c) 2012 Alexander Shvets. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Cell.h"
#import "Population.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    int populationSize;
    int DNALength;
    int mutationRate;
    
    int generation;
    int bestMatch;
    
    int appState;
    
    Cell* goalDNA;
    Population* population;
}

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *fieldPopulationSize;
@property (weak) IBOutlet NSTextField *fieldDNALength;
@property (weak) IBOutlet NSTextField *fieldMutationRate;

@property (weak) IBOutlet NSSlider *sliderPopulationSize;
@property (weak) IBOutlet NSSlider *sliderDNALength;
@property (weak) IBOutlet NSSlider *sliderMutationRate;

@property (weak) IBOutlet NSTextField *fieldGoalDNA;
@property (weak) IBOutlet NSTextField *labelGeneration;
@property (weak) IBOutlet NSTextField *labelBestMatch;
@property (weak) IBOutlet NSLevelIndicator *progressMatch;

@property (weak) IBOutlet NSButton *btnStart;
@property (weak) IBOutlet NSButton *btnPause;
@property (weak) IBOutlet NSButton *btnLoad;

- (IBAction)startEvolution:(id)sender;
- (IBAction)pauseEvolution:(id)sender;
- (IBAction)loadGoalDNA:(id)sender;
- (NSString*)validateDNAString:(NSString*)DNAString;

- (void)buildGoalDNAWithLength:(int)length;

- (void)disableControls;
- (void)enableControls;
- (void)appReset;

- (void)evolution;

@end
