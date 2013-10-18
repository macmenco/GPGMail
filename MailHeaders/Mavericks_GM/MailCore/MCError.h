/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@class NSMutableDictionary;

@interface MCError : NSError <NSAlertDelegate>
{
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithException:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 helpTag:(id)arg5 userInfo:(id)arg6;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)messageTraceableStringForError:(id)arg1;
- (void)dealloc;
- (BOOL)alertShowHelp:(id)arg1;
- (void)useGenericDescription:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setHelpTag:(id)arg1;
- (void)setMoreInfo:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (id)shortDescription;
- (id)helpAnchor;
- (id)moreInfo;
- (id)localizedDescription;
- (id)userInfo;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithError:(id)arg1;

@end

