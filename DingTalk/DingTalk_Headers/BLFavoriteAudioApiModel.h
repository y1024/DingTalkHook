//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContentApiModel.h"

@class NSArray, NSString;

@interface BLFavoriteAudioApiModel : BLFavoriteContentApiModel
{
    NSString *_mediaId;
    NSString *_authMediaId;
    NSString *_authCode;
    long long _duration;
    NSArray *_audioVolumns;
}

@property(copy, nonatomic) NSArray *audioVolumns; // @synthesize audioVolumns=_audioVolumns;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *authMediaId; // @synthesize authMediaId=_authMediaId;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end
