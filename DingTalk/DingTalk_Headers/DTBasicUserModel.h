//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTBasicUserModel : Marshal
{
    _Bool _isFinish;
    NSNumber *_uid;
    NSString *_nick;
    NSString *_avatarMediaId;
    NSNumber *_confirmStatus;
    NSNumber *_confirmTime;
    NSNumber *_statusChangeTime;
    NSNumber *_finishTime;
}

@property(nonatomic) _Bool isFinish; // @synthesize isFinish=_isFinish;
@property(retain, nonatomic) NSNumber *finishTime; // @synthesize finishTime=_finishTime;
@property(retain, nonatomic) NSNumber *statusChangeTime; // @synthesize statusChangeTime=_statusChangeTime;
@property(retain, nonatomic) NSNumber *confirmTime; // @synthesize confirmTime=_confirmTime;
@property(retain, nonatomic) NSNumber *confirmStatus; // @synthesize confirmStatus=_confirmStatus;
@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

