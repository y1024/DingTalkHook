//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BLCalendarAttendee : NSObject
{
    _Bool _rsvp;
    NSString *_email;
    NSString *_name;
    long long _role;
    long long _status;
    long long _type;
}

+ (id)attendeeWithJsonString:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) _Bool rsvp; // @synthesize rsvp=_rsvp;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)toJsonString;

@end

