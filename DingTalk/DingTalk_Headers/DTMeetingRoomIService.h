//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTMeetingRoomIService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)getDeviceInfo:(id)arg1 devId:(id)arg2 callback:(id)arg3;
- (void)localShareStatusIndication:(id)arg1 callback:(id)arg2;
- (void)queryMeetingUsersStatus:(id)arg1 callback:(id)arg2;
- (void)updateMeetingUsersStatus:(id)arg1 callback:(id)arg2;
- (void)updateDevStatus:(id)arg1 callback:(id)arg2;
- (void)updateDevInformation:(id)arg1 callback:(id)arg2;
- (void)ShareTerminate:(id)arg1 callback:(id)arg2;
- (void)RemoteShareCreate:(id)arg1 callback:(id)arg2;
- (void)LocalShareCreate:(id)arg1 callback:(id)arg2;

@end

