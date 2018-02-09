//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTMicroAppProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface DTCHAppModel : NSObject <DTMicroAppProtocol>
{
    _Bool _hintShow;
    _Bool _mockCHAppModel;
    long long _agent;
    NSString *_name;
    NSString *_icon;
    NSString *_rawHomePage;
    long long _senderUid;
    long long _appId;
    long long _csOrder;
    NSString *_hintText;
    long long _hintVersion;
    NSString *_groupKey;
    NSString *_groupName;
    long long _securityTag;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool mockCHAppModel; // @synthesize mockCHAppModel=_mockCHAppModel;
@property(nonatomic) long long securityTag; // @synthesize securityTag=_securityTag;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupKey; // @synthesize groupKey=_groupKey;
@property(nonatomic) long long hintVersion; // @synthesize hintVersion=_hintVersion;
@property(copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(nonatomic) _Bool hintShow; // @synthesize hintShow=_hintShow;
@property(nonatomic) long long csOrder; // @synthesize csOrder=_csOrder;
@property(nonatomic) long long appId; // @synthesize appId=_appId;
@property(nonatomic) long long senderUid; // @synthesize senderUid=_senderUid;
@property(copy, nonatomic) NSString *rawHomePage; // @synthesize rawHomePage=_rawHomePage;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long agent; // @synthesize agent=_agent;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
