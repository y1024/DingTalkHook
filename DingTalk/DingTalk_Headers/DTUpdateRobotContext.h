//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface DTUpdateRobotContext : NSObject
{
    _Bool _enableAlarm;
    long long _robotId;
    NSString *_robotName;
    NSString *_avatarMediaId;
    NSString *_cityCode;
    NSDate *_date;
}

@property(nonatomic) _Bool enableAlarm; // @synthesize enableAlarm=_enableAlarm;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
@property(copy, nonatomic) NSString *robotName; // @synthesize robotName=_robotName;
@property(nonatomic) long long robotId; // @synthesize robotId=_robotId;
- (void).cxx_destruct;

@end

