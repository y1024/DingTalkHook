//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, WKIDLOpenIdExModel;

@interface WKIDLMemberMessageStatusModel : Marshal
{
    WKIDLOpenIdExModel *_openIdEx;
    NSNumber *_status;
    NSNumber *_reachStatus;
    NSNumber *_messageId;
}

@property(retain, nonatomic) NSNumber *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSNumber *reachStatus; // @synthesize reachStatus=_reachStatus;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) WKIDLOpenIdExModel *openIdEx; // @synthesize openIdEx=_openIdEx;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

