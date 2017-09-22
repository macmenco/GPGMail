//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

//#import "NSMenuDelegate-Protocol.h"

@class NSArray, NSMenu, NSMutableSet, NSPopUpButton, NSString;

@interface MailboxesChooser : NSObject <NSMenuDelegate>
{
    NSMenu *_rootMenu;
    NSPopUpButton *_popUpButton;
    id _selectedItem;
    NSMutableSet *_updatedMenus;
    BOOL _useSelection;
//    CDUnknownBlockType _includeMailboxCondition;
//    CDUnknownBlockType _enableMailboxCondition;
    id _target;
    SEL _action;
    NSArray *_additionalItems;
}

+ (BOOL)automaticallyNotifiesObserversOfSelectedItem;
+ (BOOL)automaticallyNotifiesObserversOfPopUpButton;
+ (BOOL)automaticallyNotifiesObserversOfRootMenu;
@property(readonly, nonatomic) BOOL useSelection; // @synthesize useSelection=_useSelection;
@property(retain, nonatomic) NSArray *additionalItems; // @synthesize additionalItems=_additionalItems;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
//@property(copy, nonatomic) CDUnknownBlockType enableMailboxCondition; // @synthesize enableMailboxCondition=_enableMailboxCondition;
//@property(copy, nonatomic) CDUnknownBlockType includeMailboxCondition; // @synthesize includeMailboxCondition=_includeMailboxCondition;
//- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)_popUpAction:(id)arg1;
- (void)refresh;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_outlineViewStateDidChange:(id)arg1;
- (void)_invalidateUpdatedMenus:(id)arg1;
- (void)invalidateUpdatedMenus;
- (id)_genericVisibleChildrenForMailbox:(id)arg1;
- (void)_addMenuItemsForItems:(id)arg1 toMenu:(id)arg2 withIndentationLevel:(long long)arg3 initialSeparatorItem:(BOOL)arg4;
- (id)_menuItemForItem:(id)arg1 indentationLevel:(long long)arg2;
@property(retain, nonatomic) id selectedItem;
@property(nonatomic) __weak NSPopUpButton *popUpButton;
@property(nonatomic) __weak NSMenu *rootMenu;
- (void)_setupPopUpButton;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (id)initWithSelection:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

