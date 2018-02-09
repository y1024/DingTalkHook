//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTWaterMarkView;

@interface DTWaterMarkContainerView : UIView
{
    DTWaterMarkView *_waterMarkView;
    double _currentOffsetY;
}

@property(nonatomic) double currentOffsetY; // @synthesize currentOffsetY=_currentOffsetY;
@property(retain, nonatomic) DTWaterMarkView *waterMarkView; // @synthesize waterMarkView=_waterMarkView;
- (void).cxx_destruct;
- (void)scrollViewWithOffsetY:(double)arg1 scrollView:(id)arg2;
- (void)setWaterMarkViewItem:(id)arg1;
- (void)setWaterMarkViewEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setWaterMarkViewFrame:(struct CGRect)arg1;
- (void)setContainerFrame:(struct CGRect)arg1;
- (void)loadComponent;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
