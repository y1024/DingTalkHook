//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_semaphore;

@interface DTConversationIconManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lock;
    _Bool _waitingRequest;
    NSSet *_cids;
    unsigned long long _timeDelay;
    unsigned long long _timeDelayPerConversation;
    NSMutableDictionary *_IconFailDetails;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *IconFailDetails; // @synthesize IconFailDetails=_IconFailDetails;
@property(nonatomic) unsigned long long timeDelayPerConversation; // @synthesize timeDelayPerConversation=_timeDelayPerConversation;
@property(nonatomic) unsigned long long timeDelay; // @synthesize timeDelay=_timeDelay;
@property(nonatomic) _Bool waitingRequest; // @synthesize waitingRequest=_waitingRequest;
@property(copy, nonatomic) NSSet *cids; // @synthesize cids=_cids;
- (void).cxx_destruct;
- (void)requestFailCid:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)requestCid:(id)arg1;
- (_Bool)checkNeedGoOnRequest:(id)arg1;
- (void)requestGroupIcon;
- (void)getGroupIcon:(id)arg1;
- (id)init;

@end
