/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SGTSearchField.h"

@interface MessageViewerSearchField : SGTSearchField
{
    id <MessageViewerSearchFieldFocusDelegate> _focusDelegate;
    BOOL _focused;
}

@property id <MessageViewerSearchFieldFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
@property(getter=isFocused) BOOL focused;
- (void)windowDidResignKey:(id)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

