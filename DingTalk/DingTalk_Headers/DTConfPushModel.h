//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTConfPushModel : Marshal
{
    NSNumber *_conferenceId;
    NSNumber *_uid;
    NSString *_action;
    NSString *_cause;
    NSNumber *_time;
    NSNumber *_callerId;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSNumber *callerId; // @synthesize callerId=_callerId;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *cause; // @synthesize cause=_cause;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber *conferenceId; // @synthesize conferenceId=_conferenceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

