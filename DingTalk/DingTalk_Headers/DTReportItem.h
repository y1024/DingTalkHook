//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTReportItem : NSObject
{
    long long _uid;
    long long _reportUid;
    NSString *_reportItemId;
    unsigned long long _reportType;
    long long _reason;
    NSString *_remark;
}

+ (id)itemWithReportItemType:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(copy, nonatomic) NSString *reportItemId; // @synthesize reportItemId=_reportItemId;
@property(nonatomic) long long reportUid; // @synthesize reportUid=_reportUid;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)reportModelOfItem;

@end

