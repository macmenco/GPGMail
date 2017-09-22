//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@interface MFEWSLibraryInterface : NSObject
{
}

+ (void)removeMessageAction:(id)arg1;
+ (BOOL)_setResultsForAppendAction:(id)arg1;
+ (BOOL)_setResultsForCopyAction:(id)arg1;
+ (BOOL)setResultsForMessageAction:(id)arg1;
+ (id)_deleteMessageActionWithID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 handle:(id)arg5 db:(struct sqlite3 *)arg6;
+ (id)_flagChangeMessageActionWithID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 flags:(long long)arg5 mask:(long long)arg6 handle:(id)arg7 db:(struct sqlite3 *)arg8;
+ (id)_appendMessageActionWithID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 flags:(long long)arg5 handle:(id)arg6 db:(struct sqlite3 *)arg7;
+ (id)_copyMessageActionWithID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 handle:(id)arg5 db:(struct sqlite3 *)arg6 messagesToRecover:(id)arg7;
+ (id)messageActionsForAccount:(id)arg1 previousActionID:(long long)arg2;
+ (void)_addActionMessageForMessage:(id)arg1 actionID:(long long)arg2 handle:(id)arg3 db:(struct sqlite3 *)arg4;
+ (void)createDeleteActionForEWSMessages:(id)arg1 mailbox:(id)arg2;
+ (void)deleteMessages:(id)arg1 mailbox:(id)arg2;
+ (void)createFlagChangeActionForMessages:(id)arg1 mailbox:(id)arg2 flags:(long long)arg3 mask:(long long)arg4;
+ (void)createAppendActionForMessage:(id)arg1 activityType:(id)arg2 userInitiated:(BOOL)arg3;
+ (BOOL)copyMessages:(id)arg1 toMailbox:(id)arg2 activityType:(id)arg3 userInitiated:(BOOL)arg4 settingFlags:(id)arg5 oldMessagesByNewMessage:(id *)arg6 error:(id *)arg7;

@end

