//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTLVLiveEndViewParam : NSObject
{
    NSString *_cid;
    long long _anchorId;
    NSString *_liveUuid;
    long long _liveState;
    long long _action;
}

@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) long long liveState; // @synthesize liveState=_liveState;
@property(copy, nonatomic) NSString *liveUuid; // @synthesize liveUuid=_liveUuid;
@property(nonatomic) long long anchorId; // @synthesize anchorId=_anchorId;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;

@end
