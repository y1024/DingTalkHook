//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTLocalShareStatusIndicationModel : Marshal
{
    NSString *_sessionId;
    NSNumber *_status;
    NSString *_macAddr;
    NSString *_localIp;
    NSString *_remoteIp;
}

@property(copy, nonatomic) NSString *remoteIp; // @synthesize remoteIp=_remoteIp;
@property(copy, nonatomic) NSString *localIp; // @synthesize localIp=_localIp;
@property(copy, nonatomic) NSString *macAddr; // @synthesize macAddr=_macAddr;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

