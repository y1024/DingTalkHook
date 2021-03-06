//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTSMTPSession, NSString;

@interface DTSMTPAccount : NSObject
{
    _Bool _checkCertificate;
    _Bool _allowInvalidCertificate;
    unsigned int _port;
    int _authType;
    NSString *_host;
    NSString *_login;
    NSString *_password;
    long long _connectType;
    NSString *_realm;
    DTSMTPSession *_session;
}

@property(retain, nonatomic) DTSMTPSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool allowInvalidCertificate; // @synthesize allowInvalidCertificate=_allowInvalidCertificate;
@property(nonatomic) _Bool checkCertificate; // @synthesize checkCertificate=_checkCertificate;
@property(copy, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(nonatomic) long long connectType; // @synthesize connectType=_connectType;
@property(nonatomic) int authType; // @synthesize authType=_authType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *login; // @synthesize login=_login;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)checkConnectionRequest;
- (id)sendMessage:(id)arg1 recipients:(id)arg2 messageData:(id)arg3;
- (void)_setupRequest:(id)arg1;
- (void)_unsetupSession;
- (void)_setupSession;
- (id)init;

@end

