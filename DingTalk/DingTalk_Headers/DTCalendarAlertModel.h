//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCalendarAlertModel : Marshal
{
    NSNumber *_calendarId;
    NSNumber *_version;
    NSString *_templateId;
    NSString *_url;
    NSNumber *_type;
    NSString *_title;
    NSString *_icon;
    NSString *_subTitle;
    NSString *_content;
    NSString *_btnTitle;
    NSNumber *_deadline;
    NSNumber *_occurTime;
}

@property(retain, nonatomic) NSNumber *occurTime; // @synthesize occurTime=_occurTime;
@property(retain, nonatomic) NSNumber *deadline; // @synthesize deadline=_deadline;
@property(copy, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSNumber *calendarId; // @synthesize calendarId=_calendarId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

