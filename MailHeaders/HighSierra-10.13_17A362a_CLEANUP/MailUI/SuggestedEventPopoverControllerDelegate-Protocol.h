//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class EKEvent, SGRealtimeEvent, SuggestedEventPopoverController;

@protocol SuggestedEventPopoverControllerDelegate <NSObject>
- (void)suggestedEventPopoverController:(SuggestedEventPopoverController *)arg1 didIgnoreSuggestedEvent:(SGRealtimeEvent *)arg2;
- (void)suggestedEventPopoverController:(SuggestedEventPopoverController *)arg1 didCommitSuggestedEvent:(SGRealtimeEvent *)arg2 asEvent:(EKEvent *)arg3;
- (void)cancelSuggestedEventPopoverController:(SuggestedEventPopoverController *)arg1;
@end

