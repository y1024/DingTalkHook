//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKAttachmentImage.h"

#import "WKDeprecatedAttachmentImage-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface WKDeprecatedAttachmentImage : WKAttachmentImage <WKDeprecatedAttachmentImage>
{
}


// Remaining properties
@property(nonatomic) long long attachmentType;
@property(copy, nonatomic) NSString *authCode;
@property(copy, nonatomic) NSString *authMediaId;
@property(copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *extension;
@property(copy, nonatomic) NSString *filename;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long imageSize;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(copy, nonatomic) NSString *mediaId;
@property(nonatomic) long long orientation;
@property(nonatomic) long long picType;
@property(readonly) Class superclass;
@end
