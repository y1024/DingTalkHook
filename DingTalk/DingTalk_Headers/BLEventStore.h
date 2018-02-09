//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BLAccount, NSMutableDictionary, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface BLEventStore : NSObject
{
    _Bool _isFetchingCalendars;
    BLAccount *_account;
    NSSet *_ignoredSysCalendarIDs;
    NSSet *_ignoredAlimailFolderUUIDs;
    NSMutableSet *_fetchingCacheMonths;
    NSMutableDictionary *_monthInstancesCache;
    NSMutableDictionary *_instancesCacheUpdateTimeStamp;
    NSObject<OS_dispatch_queue> *_eventStoreQueue;
    unsigned long long _storeUpdateTimeStamp;
}

+ (void)removeAllEventStore;
+ (void)removeEventStoreForAccount:(id)arg1;
+ (id)eventStoreForAccount:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long storeUpdateTimeStamp; // @synthesize storeUpdateTimeStamp=_storeUpdateTimeStamp;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventStoreQueue; // @synthesize eventStoreQueue=_eventStoreQueue;
@property(retain, nonatomic) NSMutableDictionary *instancesCacheUpdateTimeStamp; // @synthesize instancesCacheUpdateTimeStamp=_instancesCacheUpdateTimeStamp;
@property(retain, nonatomic) NSMutableDictionary *monthInstancesCache; // @synthesize monthInstancesCache=_monthInstancesCache;
@property(nonatomic) _Bool isFetchingCalendars; // @synthesize isFetchingCalendars=_isFetchingCalendars;
@property(retain, nonatomic) NSMutableSet *fetchingCacheMonths; // @synthesize fetchingCacheMonths=_fetchingCacheMonths;
@property(retain, nonatomic) NSSet *ignoredAlimailFolderUUIDs; // @synthesize ignoredAlimailFolderUUIDs=_ignoredAlimailFolderUUIDs;
@property(retain, nonatomic) NSSet *ignoredSysCalendarIDs; // @synthesize ignoredSysCalendarIDs=_ignoredSysCalendarIDs;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)updateInstanceForMonth:(id)arg1;
- (void)addInstances:(id)arg1 toMonthCache:(id)arg2;
- (id)calendarInstancesForMonth:(id)arg1;
- (id)calendarInstancesForDate:(id)arg1;
- (void)dispatchToBkToMainWithValidSelf:(CDUnknownBlockType)arg1;
- (void)alimailCalendarCacheClear:(id)arg1;
- (void)alimailCalendarCacheReady:(id)arg1;
- (void)setIgnoredSysCalendarIDs:(id)arg1 ignoredAlimailFolderUUIDs:(id)arg2;
- (void)resetData;
- (void)dealloc;
- (id)init;

@end
