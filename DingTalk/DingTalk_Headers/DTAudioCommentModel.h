//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTAudioCommentModel : Marshal
{
    NSString *_mediaId;
    NSNumber *_duration;
    NSArray *_volumns;
    NSString *_authMediaId;
    NSString *_authCode;
}

@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(copy, nonatomic) NSArray *volumns; // @synthesize volumns=_volumns;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

