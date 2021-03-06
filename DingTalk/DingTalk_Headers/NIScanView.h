//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface NIScanView : UIView
{
    UIView *_tableHeaderView;
    UIView *_tableHeaderBackgroundView;
    UIImageView *_bubbleView;
    UIImageView *_rotatableCircleView;
    UIImageView *_shieldView;
    UIImageView *_statusIconView;
    UILabel *_statusTitleView;
    UILabel *_statusDetailView;
    UIView *_coverBg;
}

@property(retain, nonatomic) UIView *coverBg; // @synthesize coverBg=_coverBg;
@property(retain, nonatomic) UILabel *statusDetailView; // @synthesize statusDetailView=_statusDetailView;
@property(retain, nonatomic) UILabel *statusTitleView; // @synthesize statusTitleView=_statusTitleView;
@property(retain, nonatomic) UIImageView *statusIconView; // @synthesize statusIconView=_statusIconView;
@property(retain, nonatomic) UIImageView *shieldView; // @synthesize shieldView=_shieldView;
@property(retain, nonatomic) UIImageView *rotatableCircleView; // @synthesize rotatableCircleView=_rotatableCircleView;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UIView *tableHeaderBackgroundView; // @synthesize tableHeaderBackgroundView=_tableHeaderBackgroundView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
- (void).cxx_destruct;
- (void)changeStatusWarn:(id)arg1 action:(id)arg2 url:(id)arg3;
- (void)changeStatusOk:(id)arg1 action:(id)arg2;
- (void)startAnimation;
- (void)configHeaderView;
- (void)resetStatus;

@end

