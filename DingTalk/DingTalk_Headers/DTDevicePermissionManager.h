//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTDevicePermissionManager : NSObject
{
}

+ (void)showPermissionAlertWithHint:(id)arg1;
+ (_Bool)checkContactPermissionWithRemind:(_Bool)arg1;
+ (_Bool)checkMicrophonePermissionWithRemind:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
+ (_Bool)checkCameraPermissionWithRemind:(_Bool)arg1;
+ (void)requestAlbumPermission:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end

