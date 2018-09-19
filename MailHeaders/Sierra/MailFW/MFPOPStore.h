//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFMessageStore.h>

#import "MFPOPConnectionDelegate.h"
#import "MFRouterStore.h"

@class MFPOPAccount, NSMutableIndexSet, NSMutableSet, NSProgress, NSString;

@interface MFPOPStore : MFMessageStore <MFPOPConnectionDelegate, MFRouterStore>
{
    NSMutableSet *_skippedMessageIds;	// 16 = 0x10
    NSMutableIndexSet *_messageNumbersToDelete;	// 24 = 0x18
    BOOL _lastConnectionFailed;	// 32 = 0x20
    BOOL _routerCancelled;	// 33 = 0x21
    BOOL _performingUserInitiatedFetch;	// 34 = 0x22
    NSProgress *_checkProgress;	// 40 = 0x28
}

@property(nonatomic) BOOL performingUserInitiatedFetch; // @synthesize performingUserInitiatedFetch=_performingUserInitiatedFetch;
@property(retain, nonatomic) NSProgress *checkProgress; // @synthesize checkProgress=_checkProgress;
@property BOOL routerCancelled; // @synthesize routerCancelled=_routerCancelled;
- (void).cxx_destruct;	// IMP=0x000000000022cd61
- (void)_finishCheckingForMailProgress;	// IMP=0x000000000022cc83
- (void)_setFoundNewUnreadMessageInInbox;	// IMP=0x000000000022cc03
- (void)_incrementFoundMessages:(unsigned long long)arg1;	// IMP=0x000000000022cb09
- (void)_beginCheckingForMailProgress;	// IMP=0x000000000022c9cc
- (void)messagesWereRouted:(id)arg1;	// IMP=0x000000000022c580
- (void)messagesWillBeRouted:(id)arg1;	// IMP=0x000000000022c57a
- (id)_defaultRouterDestination;	// IMP=0x000000000022c52a
- (void)cancel;	// IMP=0x000000000022c513
- (void)connection:(id)arg1 didRetrieveData:(id)arg2 forMessageNumber:(unsigned long long)arg3;	// IMP=0x000000000022c23a
- (long long)connection:(id)arg1 willRetrieveMessageNumber:(unsigned long long)arg2 header:(id)arg3 size:(unsigned long long)arg4;	// IMP=0x000000000022b96a
- (void)connection:(id)arg1 receivedNumberOfBytes:(unsigned long long)arg2;	// IMP=0x000000000022b7f5
@property(readonly, nonatomic) BOOL connectionShouldPrefetchMessages;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;	// IMP=0x000000000022b7a6
- (void)_cancelAutosave;	// IMP=0x000000000022b7a0
- (void)_setNeedsAutosave;	// IMP=0x000000000022b79a
- (void)writeUpdatedMessageDataToDisk;	// IMP=0x000000000022b794
- (id)messageForMessageID:(id)arg1;	// IMP=0x000000000022b59a
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x000000000022b421
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x000000000022b30e
- (id)displayName;	// IMP=0x000000000022b2be
- (BOOL)isOpened;	// IMP=0x000000000022b2b3
- (id)mailbox;	// IMP=0x000000000022b274
- (id)_copyMessageNumbersToDelete;	// IMP=0x000000000022b215
- (void)_clearMessageNumbersToDelete;	// IMP=0x000000000022b1be
- (void)_addMessageNumberToDelete:(unsigned long long)arg1;	// IMP=0x000000000022b12c
- (BOOL)_closeConnection:(id)arg1;	// IMP=0x000000000022b046
- (void)_deleteMessagesMarkedForDeletionUsingManager:(id)arg1;	// IMP=0x000000000022ae0d
- (void)_removeDeletedMessagesWithNumbers:(id)arg1 fromSeenMessageManager:(id)arg2 connection:(id)arg3;	// IMP=0x000000000022ac4b
- (BOOL)_shouldDeleteSeenMessage:(id)arg1 messageID:(id)arg2 deletionPolicy:(long long)arg3 cutoffDate:(id)arg4 url:(id)arg5 inbox:(id)arg6;	// IMP=0x000000000022aaca
- (id)_messageIDForNumber:(unsigned long long)arg1 serverIdsByNumber:(id)arg2 connection:(id)arg3;	// IMP=0x000000000022aa09
- (BOOL)_firstAndLast:(unsigned long long)arg1 onConnection:(id)arg2 alreadySeen:(id)arg3;	// IMP=0x000000000022a8cc
- (void)_backgroundFetchFailed:(id)arg1;	// IMP=0x000000000022a302
- (id)_authenticatedConnection;	// IMP=0x000000000022a168
- (BOOL)_createDirectoryIfNeeded;	// IMP=0x0000000000229d70
- (void)fetchSynchronously;	// IMP=0x0000000000228b1c
- (void)deleteMessages:(id)arg1;	// IMP=0x0000000000228564
@property(readonly, nonatomic) MFPOPAccount *account;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;	// IMP=0x00000000002283d1
- (id)init;	// IMP=0x0000000000228302
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000022818c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
