//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTLVMessageObserverBox : NSObject
{
    id _observer;
    NSString *_cid;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)messagesBeginSend:(id)arg1;
- (void)callbackMessages:(id)arg1;
- (void)receivedMessageListNotification:(id)arg1;
- (void)receivedMessageNotification:(id)arg1;
- (void)setObserver:(id)arg1 cid:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

