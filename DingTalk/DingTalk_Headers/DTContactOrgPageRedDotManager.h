//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTContactOrgPageRedDotManager : NSObject
{
}

+ (_Bool)adModelInCache:(long long)arg1;
+ (void)cacheAdModel:(id)arg1;
+ (void)updateCellItem:(id)arg1 OrgID:(long long)arg2;
+ (unsigned long long)redDotTypeWithOrgId:(long long)arg1;
+ (void)didTappedOrgPage:(long long)arg1;
+ (id)orgPageRedDotKeyWithOrgID:(long long)arg1;
+ (id)cacheKeyWithOrgID:(id)arg1;
+ (id)sharedManager;
- (void)mobileAdsRedDotDidChange:(id)arg1;
- (void)setupNotification;
- (void)dealloc;

@end
