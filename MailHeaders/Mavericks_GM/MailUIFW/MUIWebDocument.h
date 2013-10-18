/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL;

@interface MUIWebDocument : NSObject <NSCoding>
{
    NSString *_html;
    BOOL _loadRemoteContent;
    BOOL _hasBlockedRemoteContent;
    NSArray *_attachments;
    Class _webAttachmentClass;
    unsigned long long _imageScale;
    NSURL *_baseURL;
    NSDictionary *_dataDetectorsContext;
    NSMutableDictionary *_jsDocumentContext;
    NSError *_parseError;
    unsigned long long _originalEncoding;
}

@property(nonatomic) unsigned long long originalEncoding; // @synthesize originalEncoding=_originalEncoding;
@property(nonatomic) BOOL hasBlockedRemoteContent; // @synthesize hasBlockedRemoteContent=_hasBlockedRemoteContent;
@property(nonatomic) BOOL loadRemoteContent; // @synthesize loadRemoteContent=_loadRemoteContent;
@property(retain, nonatomic) NSError *parseError; // @synthesize parseError=_parseError;
@property(readonly, nonatomic) NSMutableDictionary *jsDocumentContext; // @synthesize jsDocumentContext=_jsDocumentContext;
@property(copy, nonatomic) NSDictionary *dataDetectorsContext; // @synthesize dataDetectorsContext=_dataDetectorsContext;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) unsigned long long imageScale; // @synthesize imageScale=_imageScale;
@property(retain, nonatomic) Class webAttachmentClass; // @synthesize webAttachmentClass=_webAttachmentClass;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSString *html;
- (id)attachmentForContentID:(id)arg1;
- (id)description;
- (id)_defaultDocumentHTML;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_muiWebDocumentCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

