//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LWPMessage, LWPSessionContext, LWPStream, NSError;

@protocol LWPStreamDelegate <NSObject>
- (void)lwpstream:(LWPStream *)arg1 triggerHandshakeEvent:(int)arg2;
- (void)lwpstreamDidSending:(LWPStream *)arg1 message:(LWPMessage *)arg2 bytes:(int)arg3;
- (void)lwpstreamDidReceivedMessage:(LWPStream *)arg1 message:(LWPMessage *)arg2;
- (void)lwpstreamDidReceived:(LWPStream *)arg1 bytes:(int)arg2;
- (void)lwpstreamDidBroken:(LWPStream *)arg1;
- (void)lwpstreamDidFailConnect:(LWPStream *)arg1 error:(NSError *)arg2;
- (void)lwpstream:(LWPStream *)arg1 didUpdateSessionContext:(LWPSessionContext *)arg2;
- (void)lwpstreamDidConnected:(LWPStream *)arg1 context:(LWPSessionContext *)arg2 sessionReuse:(_Bool)arg3;
@end
