//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTFaceRect : Marshal
{
    NSNumber *_top;
    NSNumber *_left;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_sliceIndex;
}

@property(copy, nonatomic) NSString *sliceIndex; // @synthesize sliceIndex=_sliceIndex;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *left; // @synthesize left=_left;
@property(retain, nonatomic) NSNumber *top; // @synthesize top=_top;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

