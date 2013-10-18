/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCActivityTarget.h"

@class MCActivityMonitor, NSArray, NSDictionary, NSError, NSString;

@interface MCAccountAutoconfigurator : NSObject <MCActivityTarget>
{
    long long _state;
    NSString *_userName;
    BOOL _authenticationFailed;
    BOOL _shouldDoEWSAutodiscovery;
    id <MCAccountAutoconfiguratorDelegate> _delegate;
    MCActivityMonitor *_autoconfigurationActivity;
    NSString *_emailAddress;
    NSString *_password;
    NSString *_domain;
    NSDictionary *_receivingAccountInfo;
    NSArray *_deliveryAccountInfos;
    NSError *_authenticationError;
}

+ (id)userNameForEmailAddress:(id)arg1 autoconfiguratorAccountInfo:(id)arg2;
+ (id)serverNameFromAutoconfiguratorAccountInfo:(id)arg1;
+ (id)urlFromAutoconfiguratorObject:(id)arg1;
@property BOOL shouldDoEWSAutodiscovery; // @synthesize shouldDoEWSAutodiscovery=_shouldDoEWSAutodiscovery;
@property(copy) NSError *authenticationError; // @synthesize authenticationError=_authenticationError;
@property(copy) NSArray *deliveryAccountInfos; // @synthesize deliveryAccountInfos=_deliveryAccountInfos;
@property(copy) NSDictionary *receivingAccountInfo; // @synthesize receivingAccountInfo=_receivingAccountInfo;
@property BOOL authenticationFailed; // @synthesize authenticationFailed=_authenticationFailed;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain) MCActivityMonitor *autoconfigurationActivity; // @synthesize autoconfigurationActivity=_autoconfigurationActivity;
@property id <MCAccountAutoconfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_autoconfigure;
- (BOOL)_shouldCancel;
- (void)_setState:(long long)arg1;
- (void)_sendAutoconfiguratorDidFinish;
- (void)_sendAutoconfiguratorDidFail;
- (void)_sendAutoconfiguratorDidChangeState:(id)arg1;
@property(copy, nonatomic) NSString *userName;
- (void)cancel;
- (void)execute;
- (void)dealloc;
- (id)initWithEmailAddress:(id)arg1 userName:(id)arg2 password:(id)arg3 delegate:(id)arg4;
- (id)init;

@end

