//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BLAccount;

@interface BLAPITokenRefresher : NSObject
{
    _Bool _isRefreshing;
    BLAccount *_account;
}

+ (void)removeRefresherForAccount:(id)arg1;
+ (id)refresherForAccount:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)notifyRefresh;

@end

