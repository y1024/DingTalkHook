//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTEmotionPackageModel;

@interface DTEmotionBriefCellItem : NSObject
{
    DTEmotionPackageModel *_packageModel;
    unsigned long long _style;
    CDUnknownBlockType _remove;
}

+ (id)buildWithPackageModel:(id)arg1 style:(unsigned long long)arg2;
+ (id)buildWithPackage:(id)arg1 style:(unsigned long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType remove; // @synthesize remove=_remove;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) DTEmotionPackageModel *packageModel; // @synthesize packageModel=_packageModel;
- (void).cxx_destruct;

@end
