//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTDingDriveUserPickerController, NSArray;

@protocol DTDingDriveUserPickerControllerDelegate <NSObject>

@optional
- (void)userPickerController:(DTDingDriveUserPickerController *)arg1 didDeleteMembers:(NSArray *)arg2 departments:(NSArray *)arg3 groups:(NSArray *)arg4 organizationIds:(NSArray *)arg5;
- (void)userPickerController:(DTDingDriveUserPickerController *)arg1 didAddMembers:(NSArray *)arg2 departments:(NSArray *)arg3 groups:(NSArray *)arg4 organizationIds:(NSArray *)arg5;
@end
