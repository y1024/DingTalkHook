//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIPasswdView.h"

@class UIButton, UILabel, UIView, VIPasswdCircleTickAnimationView, VIPasswdViewData, VIPasswdViewStyle;
@protocol VIPwdInputViewDelegate;

@interface VIPasswdPopupView : VIPasswdView
{
    double _offsetY;
    double _visibleYToBottom;
    double _pageKeyboardOffsetY;
    VIPasswdViewStyle *_style;
    VIPasswdViewData *_data;
    _Bool _numericPasswd;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIView *_navLine;
    UILabel *_loadingLabel;
    UILabel *_upperHintLabel;
    UILabel *_lowerHintLabel;
    id <VIPwdInputViewDelegate> _pwdInputView;
    UIButton *_lowerRightButton;
    VIPasswdCircleTickAnimationView *_animationView;
    _Bool _canBack;
    double _visibleHeight;
}

@property(readonly, nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
- (void).cxx_destruct;
- (void)pause;
- (void)finishWithSuccess;
- (void)reset;
- (void)resetWithoutClear;
- (void)forgetPasswd;
- (void)tryOthers;
- (void)stopProgress;
- (void)showProgress;
- (void)submitData;
- (void)onBackClicked;
- (void)onPwdConfirmed;
- (void)setUpSubviews;
- (void)moduleWillClose;
- (void)dealloc;
- (id)initWithData:(id)arg1 andStyle:(id)arg2;

@end
