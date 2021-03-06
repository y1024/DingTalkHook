//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWPQueue, NSMutableDictionary;

@interface DTBleRequestPool : NSObject
{
    LWPQueue *_workQueue;
    NSMutableDictionary *_requestMap;
    NSMutableDictionary *_runningRequestMap;
    NSMutableDictionary *_timerMap;
}

@property(retain, nonatomic) NSMutableDictionary *timerMap; // @synthesize timerMap=_timerMap;
@property(retain, nonatomic) NSMutableDictionary *runningRequestMap; // @synthesize runningRequestMap=_runningRequestMap;
@property(retain, nonatomic) NSMutableDictionary *requestMap; // @synthesize requestMap=_requestMap;
@property(retain, nonatomic) LWPQueue *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)destory:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)recvResponseFromRemote:(id)arg1;
- (id)requestForKey:(id)arg1;
- (void)removeRequestTimer:(id)arg1;
- (void)clear;
- (void)enqueue:(id)arg1;
- (id)dequeue;
- (id)init;

@end

