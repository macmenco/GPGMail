/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMenuDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MFAccount, MFAccountStatus, NSArray, NSMutableDictionary, NSPopUpButton, NSTableView, NSTextView;

@interface AccountStatusDataSource : NSObject <NSMenuDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSPopUpButton *_popUp;
    NSTableView *_table;
    NSTextView *_ispInfoField;
    NSMutableDictionary *_progressIndicators;
    id <AccountStatusDataSourceDelegate> _delegate;
    MFAccountStatus *_statusProvider;
    NSArray *_accounts;
    MFAccount *_selectedAccount;
    MFAccount *_dynamicAccount;
    unsigned long long _accountFlags;
    BOOL _disabled;
    BOOL _usesOfflineStatusString;
    BOOL _allowNone;
    BOOL _allowEditServerList;
    BOOL _omitStatus;
    BOOL _selectedAccountIsLocked;
    BOOL _delegateWantsTableDataSourceInvocations;
    BOOL _allowAccountLocking;
    BOOL _beConservative;
}

+ (id)keyPathsForValuesAffectingTotalNumberOfAccounts;
@property BOOL beConservative; // @synthesize beConservative=_beConservative;
@property BOOL allowAccountLocking; // @synthesize allowAccountLocking=_allowAccountLocking;
@property BOOL delegateWantsTableDataSourceInvocations; // @synthesize delegateWantsTableDataSourceInvocations=_delegateWantsTableDataSourceInvocations;
@property BOOL selectedAccountIsLocked; // @synthesize selectedAccountIsLocked=_selectedAccountIsLocked;
@property BOOL omitStatus; // @synthesize omitStatus=_omitStatus;
@property BOOL allowEditServerList; // @synthesize allowEditServerList=_allowEditServerList;
@property BOOL allowNone; // @synthesize allowNone=_allowNone;
- (void)_updateUIWithAccountState:(id)arg1;
- (void)_updateUI;
- (void)_removeUI:(id)arg1;
- (void)_addUI:(id)arg1;
- (void)_reloadAccounts:(id)arg1;
- (void)_accountInfoDidChange:(id)arg1;
- (void)_didUpdateAccountStatus:(id)arg1;
- (void)_willRefreshStatusForAllAccounts:(id)arg1;
- (void)_tableViewDoubleClickAction:(id)arg1;
- (void)_removeAllIndicators:(id)arg1;
- (id)_accountForTableRow:(long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (unsigned long long)tableRowIndexOfAccount:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewWillHide:(id)arg1;
- (void)tableViewWillBecomeVisible:(id)arg1;
- (void)configureTable:(id)arg1 ispInfoField:(id)arg2 handleDoubleClick:(BOOL)arg3 useOfflineStatusString:(BOOL)arg4;
- (void)toggleAccountLock:(id)arg1;
- (void)editServerList:(id)arg1;
- (void)_selectAccount:(id)arg1;
- (void)_synchronizePopUpWithSelectedAccount;
- (void)_popUpButtonWillPopUp:(id)arg1;
- (void)_configureMenuItem:(id)arg1 forAccount:(id)arg2;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (unsigned long long)menuItemIndexOfAccount:(id)arg1;
- (long long)numberOfItemsInMenu:(id)arg1;
- (double)popUpSizeToFitWidth:(id)arg1;
- (void)configurePopUpButton:(id)arg1;
- (void)disable;
- (void)enable;
- (void)refresh;
- (id)_displayStringWithOfflineStatusForAccount:(id)arg1;
- (void)_resetObservedAccounts;
- (void)setDelegate:(id)arg1;
@property(readonly) unsigned long long totalNumberOfAccounts;
- (void)selectAnyAccount;
@property(retain) MFAccount *selectedAccount;
@property(retain) MFAccount *dynamicAccount;
@property(copy) NSArray *accounts;
@property(retain) MFAccountStatus *statusProvider;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 forAccounts:(unsigned long long)arg2;

@end

