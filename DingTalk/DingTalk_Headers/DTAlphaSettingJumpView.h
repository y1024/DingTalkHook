//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAlphaSettingJumpModel, UIButton, UILabel;

@interface DTAlphaSettingJumpView : UIView
{
    DTAlphaSettingJumpModel *_jumpModel;
    UIButton *_jumpBtn;
    UILabel *_jumpDetailLabel;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UILabel *jumpDetailLabel; // @synthesize jumpDetailLabel=_jumpDetailLabel;
@property(retain, nonatomic) UIButton *jumpBtn; // @synthesize jumpBtn=_jumpBtn;
@property(retain, nonatomic) DTAlphaSettingJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)jumpPressed:(id)arg1;
- (void)refreshJumpView:(id)arg1;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
