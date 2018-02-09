//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIViewController;

@interface DTAssetsPickerConfiguration : NSObject
{
    _Bool _allowsEditing;
    long long _sourceType;
    unsigned long long _editingMode;
    double _cropWidth;
    double _cropHeight;
    UIViewController *_baseViewController;
    double _maxVideoDuration;
    long long _maxVideoContentLength;
    unsigned long long _options;
    CDUnknownBlockType _didPickVideoBlock;
    CDUnknownBlockType _didPickLivePhotoBlock;
    CDUnknownBlockType _didPickImageBlock;
    CDUnknownBlockType _didCancelBlock;
}

+ (id)imagePickerWithType:(long long)arg1 baseController:(id)arg2;
+ (id)allPickerWithType:(long long)arg1 baseController:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType didCancelBlock; // @synthesize didCancelBlock=_didCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didPickImageBlock; // @synthesize didPickImageBlock=_didPickImageBlock;
@property(copy, nonatomic) CDUnknownBlockType didPickLivePhotoBlock; // @synthesize didPickLivePhotoBlock=_didPickLivePhotoBlock;
@property(copy, nonatomic) CDUnknownBlockType didPickVideoBlock; // @synthesize didPickVideoBlock=_didPickVideoBlock;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long maxVideoContentLength; // @synthesize maxVideoContentLength=_maxVideoContentLength;
@property(nonatomic) double maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(nonatomic) __weak UIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
@property(nonatomic) double cropHeight; // @synthesize cropHeight=_cropHeight;
@property(nonatomic) double cropWidth; // @synthesize cropWidth=_cropWidth;
@property(nonatomic) unsigned long long editingMode; // @synthesize editingMode=_editingMode;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (id)supportedMediaTypes;
- (_Bool)isSupportedVideo;
- (_Bool)isSupportedImage;
- (id)initWithType:(long long)arg1 baseController:(id)arg2;

@end
