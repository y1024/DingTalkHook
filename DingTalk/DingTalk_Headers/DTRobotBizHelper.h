//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTRobotBizHelper : NSObject
{
}

+ (void)statisticEventKey:(id)arg1 cId:(id)arg2 templateId:(long long)arg3 robotUId:(long long)arg4 enable:(id)arg5 source:(id)arg6;
+ (void)statisticEventKey:(id)arg1 cId:(id)arg2 templateId:(long long)arg3 robotUId:(long long)arg4 enable:(id)arg5;
+ (void)statisticEventKey:(id)arg1 cId:(id)arg2 templateId:(long long)arg3 robotUId:(long long)arg4;
+ (void)statisticEventKey:(id)arg1 cId:(id)arg2 templateId:(long long)arg3;
+ (void)statisticEventKey:(id)arg1 sharePageSource:(id)arg2;
+ (void)statisticEventKey:(id)arg1 templateId:(long long)arg2;
+ (void)statisticEventKey:(id)arg1 cId:(id)arg2;
+ (void)statisticEventKey:(id)arg1;
+ (_Bool)checkEnterpriseRobotCanAddToConversation:(id)arg1 robotTemplate:(id)arg2;
+ (void)openRobotOTOConversationForDingtalkId:(id)arg1 sendMessage:(id)arg2;
+ (void)openRobotOTOConversationForRobotUid:(long long)arg1;
+ (_Bool)isGroupCanManageRobot:(id)arg1;
+ (void)checkLimitForConversation:(id)arg1 currentCount:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (id)indexesForCityCode:(id)arg1 inCityData:(id)arg2;
+ (id)cityNameForCode:(id)arg1 inCityData:(id)arg2;
+ (id)showDateString:(id)arg1;
+ (id)queryWeatherDataToCityData:(id)arg1;
+ (void)onPhotoPick:(long long)arg1 inVC:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)showModifyAvatarInViewController:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

@end

