//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol DTCSpaceCoorperationDataSourceDelegate <NSObject>

@optional
- (void)didHideBarSort:(_Bool)arg1;
- (void)didReloadIndexPaths:(NSArray *)arg1;
- (void)didLoadSectionDataSuccess:(unsigned long long)arg1;
- (void)didLoadSectionDataFailed:(unsigned long long)arg1 forReason:(NSString *)arg2;
- (void)didUpdateItemsWithInsert:(NSArray *)arg1 andDelete:(NSArray *)arg2;
- (void)didLoadOrganizationInfoSection:(unsigned long long)arg1;
- (void)didLoadSharedSpaces;
@end

