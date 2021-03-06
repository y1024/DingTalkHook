//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface DTMediaId : NSObject
{
    _Bool _burn;
    short _mediaIdVersion;
    short _type;
    int _height;
    int _width;
    NSString *_ext;
    long long _sequence;
    NSNumber *_idc;
    NSNumber *_authType;
    NSData *_randFactor;
    long long _openId;
}

+ (short)mediaTypeForExt:(id)arg1;
+ (id)extStringForType:(short)arg1;
+ (id)stringForType:(short)arg1;
@property(nonatomic) long long openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSData *randFactor; // @synthesize randFactor=_randFactor;
@property(retain, nonatomic) NSNumber *authType; // @synthesize authType=_authType;
@property(retain, nonatomic) NSNumber *idc; // @synthesize idc=_idc;
@property(nonatomic) _Bool burn; // @synthesize burn=_burn;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) short type; // @synthesize type=_type;
@property(nonatomic) short mediaIdVersion; // @synthesize mediaIdVersion=_mediaIdVersion;
- (void).cxx_destruct;
- (id)getTypeStr;

@end

