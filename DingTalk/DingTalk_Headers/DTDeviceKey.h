//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSData, NSNumber;

@interface DTDeviceKey : Marshal
{
    NSData *_key;
    NSNumber *_keyId;
    NSNumber *_expiredTime;
}

@property(retain, nonatomic) NSNumber *expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSNumber *keyId; // @synthesize keyId=_keyId;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
