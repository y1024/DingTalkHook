//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAsset, NSError, NSString, UIImage, VSRecorderViewController;

@protocol VSRecorderViewControllerDelegate <NSObject>
- (void)VSRecorderViewController:(VSRecorderViewController *)arg1 compeleteVideoPath:(NSString *)arg2 coverImagePath:(NSString *)arg3;
- (void)VSRecorderViewController:(VSRecorderViewController *)arg1 compeleteVideoAsset:(AVAsset *)arg2 coverImage:(UIImage *)arg3;
- (void)VSRecorderViewController:(VSRecorderViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)VSRecorderViewControllerCancel:(VSRecorderViewController *)arg1;
@end
