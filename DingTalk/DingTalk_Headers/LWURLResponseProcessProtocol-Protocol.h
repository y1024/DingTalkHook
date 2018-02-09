//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSURLRequest, NSURLResponse;
@protocol LWURLResponseProcessProtocol;

@protocol LWURLResponseProcessProtocol <NSObject>
- (NSData *)processor:(id <LWURLResponseProcessProtocol>)arg1 processData:(NSData *)arg2 forRequest:(NSURLRequest *)arg3 response:(NSURLResponse *)arg4;
- (NSDictionary *)processor:(id <LWURLResponseProcessProtocol>)arg1 processHeader:(NSDictionary *)arg2 forRequest:(NSURLRequest *)arg3;
- (_Bool)processor:(id <LWURLResponseProcessProtocol>)arg1 canProcessRequest:(NSURLRequest *)arg2;
@end
