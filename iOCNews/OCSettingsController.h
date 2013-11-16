//
//  OCSettingsController.h
//  iOCNews
//
//  Created by Peter Hedlund on 11/15/13.
//  Copyright (c) 2013 Peter Hedlund. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OCSettingsController : UITableViewController

@property (strong, nonatomic) IBOutlet UISwitch *syncOnStartSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *syncinBackgroundSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *showFaviconsSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *showThumbnailsSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *markWhileScrollingSwitch;

- (IBAction)syncOnStartChanged:(id)sender;
- (IBAction)syncInBackgroundChanged:(id)sender;
- (IBAction)showFaviconsChanged:(id)sender;
- (IBAction)showThumbnailsChanged:(id)sender;
- (IBAction)markWhileScrollingChanged:(id)sender;
- (IBAction)didTapDone:(id)sender;

@end
