//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKAttachment.h"

@class NSNumber, NSString;

@interface WKAttachmentGeo : WKAttachment
{
    NSString *_picMediaId;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_locationName;
    long long _imageSize;
}

@property(nonatomic) long long imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *picMediaId; // @synthesize picMediaId=_picMediaId;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

