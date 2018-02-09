//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewTransitionLayout.h>

#import "DTTransitionAnimatorLayout-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface DTTransitionLayout : UICollectionViewTransitionLayout <DTTransitionAnimatorLayout>
{
    NSDictionary *_poses;
    NSDictionary *_targetPoses;
    struct CGPoint _fromContentOffset;
    _Bool _toContentOffsetInitialized;
    CDUnknownBlockType _progressChanged;
    CDUnknownBlockType _transitionAlmostFinished;
    double _previousProgress;
    NSArray *_supplementaryKinds;
    struct CGPoint _toContentOffset;
}

@property(retain, nonatomic) NSArray *supplementaryKinds; // @synthesize supplementaryKinds=_supplementaryKinds;
@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(retain, nonatomic) NSDictionary *poses; // @synthesize poses=_poses;
@property(nonatomic) _Bool toContentOffsetInitialized; // @synthesize toContentOffsetInitialized=_toContentOffsetInitialized;
@property(copy, nonatomic) CDUnknownBlockType transitionAlmostFinished; // @synthesize transitionAlmostFinished=_transitionAlmostFinished;
@property(copy, nonatomic) CDUnknownBlockType progressChanged; // @synthesize progressChanged=_progressChanged;
@property(nonatomic) struct CGPoint toContentOffset; // @synthesize toContentOffset=_toContentOffset;
- (void).cxx_destruct;
- (void)collectionViewDidCompleteTransitioning:(id)arg1 completed:(_Bool)arg2 finish:(_Bool)arg3;
- (void)collectionViewAlmostCompleteTransitioning:(id)arg1;
- (id)keyForIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)interpolatePose:(id)arg1 fromPose:(id)arg2 toPose:(id)arg3 fromProgress:(double)arg4 toProgress:(double)arg5;
- (void)prepareLayout;
- (void)setTransitionProgress:(double)arg1;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
