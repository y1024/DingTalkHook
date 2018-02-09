//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTImageView, NSString, UIButton, UIImageView, UILabel;

@interface DTDingWordPopView : UIView
{
    NSString *_imageString;
    NSString *_titleString;
    NSString *_contentString;
    NSString *_cancelButttonTitle;
    NSString *_confirmButtonTitle;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
    UIImageView *_backgroundImageView;
    DTImageView *_headImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_separateLine;
    UIImageView *_verticalLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
}

+ (void)showWithImage:(id)arg1 title:(id)arg2 content:(id)arg3 cancelButtonTitle:(id)arg4 confirmButtonTitle:(id)arg5 cancelButtonBlock:(CDUnknownBlockType)arg6 confirmButtonBlock:(CDUnknownBlockType)arg7;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIImageView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(copy, nonatomic) NSString *cancelButttonTitle; // @synthesize cancelButttonTitle=_cancelButttonTitle;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(copy, nonatomic) NSString *imageString; // @synthesize imageString=_imageString;
- (void).cxx_destruct;
- (void)layoutPopView;
- (void)loadComponent;
- (void)show;
- (void)confirmButtonClick;
- (void)cancelButtonClick;
- (id)initWithImage:(id)arg1 title:(id)arg2 content:(id)arg3 cancelButtonTitle:(id)arg4 confirmButtonTitle:(id)arg5 cancelButtonBlock:(CDUnknownBlockType)arg6 confirmButtonBlock:(CDUnknownBlockType)arg7;

@end
