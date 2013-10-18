/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCMessage.h"

@class MCMessageHeaders, NSArray, NSData, NSString;

@interface MFRecoveredMessage : MCMessage
{
    NSString *_path;
    NSString *_remoteID;
    NSString *_remoteMailboxURL;
    NSString *_originalMailboxURL;
    NSArray *_gmailLabelIDs;
    MCMessageHeaders *_headers;
    unsigned long long _size;
    CDStruct_07ba05d6 _remoteFlags;
    NSData *_bodyData;
    NSData *_allData;
    BOOL _loadedFileData;
}

+ (id)spotlightAttributesForBodyData:(id)arg1 plistData:(id)arg2;
- (id)spotlightAttributes;
- (id)description;
- (BOOL)setMessageID:(long long)arg1 directory:(id)arg2;
- (void)flushCachedData;
- (CDStruct_76a5ddda)moreMessageFlags;
- (unsigned int)messageFlags;
- (CDStruct_07ba05d6)remoteFlags;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)mailbox;
- (id)account;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageBodyForIndexingAttachments;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)messageBodyFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)bodyData;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)headersIfAvailable;
- (id)headers;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)originalMailboxURLString;
- (id)remoteMailboxURLString;
- (id)messageID;
- (void)_parseBodyDataWithPList:(id)arg1;
- (void)_parseFileData:(id)arg1;
- (void)_loadFileDataIfNeeded;
- (id)_extendedAttributes;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)_initWithBodyData:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

