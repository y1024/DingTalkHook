//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTAlertPopViewModel, NSString, UIButton, UIImageView, UILabel, UITextView;

@interface DTAlertPopView : UIView
{
    _Bool _hasBtn;
    NSString *_cancelTitle;
    NSString *_confirmTitle;
    NSString *_highLightTitle;
    DTAlertPopViewModel *_viewModel;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _highLightBlock;
    UIButton *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_titleLine;
    UITextView *_contentTextView;
    UIImageView *_imageView;
    UILabel *_imageLabel;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIButton *_highLightBtn;
    UIImageView *_btnHorizontalLine;
    UIImageView *_btnVerticalLine;
}

+ (void)showWithAlertModel:(id)arg1 cancelBtnTitle:(id)arg2 highLightTitle:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 highLightBlock:(CDUnknownBlockType)arg5;
+ (void)showWithAlertModel:(id)arg1 cancelBtnTitle:(id)arg2 confirmTitle:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 confirmBlock:(CDUnknownBlockType)arg5;
@property(nonatomic) _Bool hasBtn; // @synthesize hasBtn=_hasBtn;
@property(retain, nonatomic) UIImageView *btnVerticalLine; // @synthesize btnVerticalLine=_btnVerticalLine;
@property(retain, nonatomic) UIImageView *btnHorizontalLine; // @synthesize btnHorizontalLine=_btnHorizontalLine;
@property(retain, nonatomic) UIButton *highLightBtn; // @synthesize highLightBtn=_highLightBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *imageLabel; // @synthesize imageLabel=_imageLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UIImageView *titleLine; // @synthesize titleLine=_titleLine;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIButton *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType highLightBlock; // @synthesize highLightBlock=_highLightBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) DTAlertPopViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *highLightTitle; // @synthesize highLightTitle=_highLightTitle;
@property(copy, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
- (void).cxx_destruct;
- (double)getAttibuteStringHeight:(id)arg1 maxWidth:(double)arg2;
- (void)highLightBtnPress:(id)arg1;
- (void)confirmBtnPress:(id)arg1;
- (void)cancelBtnPress:(id)arg1;
- (void)layoutSubviews;
- (void)show;
- (void)startImagesAndTitleAnimationWithImages:(id)arg1 subTitles:(id)arg2 contentAttributes:(id)arg3 duration:(double)arg4;
- (void)loadImagesCompoment;
- (void)loadLoadingCompoment;
- (void)loadFullImageCompoment;
- (void)loadImageDescribleCompoment;
- (void)loadImageCompoment;
- (void)loadNormalCompoment;
- (_Bool)loadBtnsIfNeed;
- (void)loadCompoment;
- (id)initWithAlertModel:(id)arg1 cancelTitle:(id)arg2 confirmTitle:(id)arg3 highLightTitle:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 confirmBlock:(CDUnknownBlockType)arg6 highLightBlock:(CDUnknownBlockType)arg7;
- (id)initWithAlertModel:(id)arg1 cancelBtnTitle:(id)arg2 highLightTitle:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 highLightBlock:(CDUnknownBlockType)arg5;
- (id)initWithAlertModel:(id)arg1 cancelBtnTitle:(id)arg2 confirmTitle:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 confirmBlock:(CDUnknownBlockType)arg5;

@end

