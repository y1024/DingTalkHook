//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseResp.h"

@class NSString;

@interface DTAuthorizeResp : DTBaseResp
{
    NSString *_accessCode;
}

@property(copy, nonatomic) NSString *accessCode; // @synthesize accessCode=_accessCode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
