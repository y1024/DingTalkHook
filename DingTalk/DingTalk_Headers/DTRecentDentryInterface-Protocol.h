//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTError, NSArray;

@protocol DTRecentDentryInterface <NSObject>
- (void)didLoadMoreDentryCategorySuccess:(NSArray *)arg1;
- (void)didLoadDentryCategorySuccess:(NSArray *)arg1;

@optional
- (void)datasourceModified;
- (void)didLoadMoreDentryCategoryFail:(DTError *)arg1;
- (void)didLoadDentryCategoryFail:(DTError *)arg1;
@end

