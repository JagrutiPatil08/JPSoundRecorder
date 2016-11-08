//
//  ViewController.h
//  JPSoundRecorder
//
//  Created by Kalyani on 08/11/16.
//  Copyright © 2016 JagrutiPatil. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <AVFoundation/AVFoundation.h>
@interface ViewController : UIViewController
{
    AVAudioPlayer *audioPlayer;
    AVAudioRecorder *audioRecoder;
    NSMutableDictionary *recordSetting;
}
@property (strong, nonatomic) IBOutlet UIImageView *imageview;

- (IBAction)recordAction:(id)sender;
- (IBAction)playAction:(id)sender;
- (IBAction)stopAction:(id)sender;

@end

