//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LVContext : NSObject
{
    _Bool _isLandscape;
    NSString *_coverUrl;
    NSString *_liveTitle;
    NSString *_streamUrl;
    NSString *_liveUrl;
    NSString *_liveUuid;
    NSString *_cid;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *liveUuid; // @synthesize liveUuid=_liveUuid;
@property(copy, nonatomic) NSString *liveUrl; // @synthesize liveUrl=_liveUrl;
@property(copy, nonatomic) NSString *streamUrl; // @synthesize streamUrl=_streamUrl;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(copy, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void).cxx_destruct;

@end
