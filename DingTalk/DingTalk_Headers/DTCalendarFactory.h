//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTCalendarFactory : NSObject
{
}

+ (id)weekDayStringWithDate:(id)arg1;
+ (id)openEditScheduleViewControllerWithEvent:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)openEditScheduleViewControllerWithEvent:(id)arg1;
+ (void)openScheduleDetailViewControllerWithEvent:(id)arg1 occurDate:(id)arg2;
+ (void)openScheduleDetailViewControllerWithCalendarId:(long long)arg1 occurDate:(id)arg2;
+ (id)createSchedulePageWithInputParam:(id)arg1;
+ (id)createScheduleViewControllerWithStartTime:(long long)arg1;
+ (id)createScheduleViewController;
+ (id)calendarDetailWithInstance:(id)arg1;

@end
