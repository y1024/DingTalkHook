//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface DTCSpaceCFBottomView : UIView
{
    CDUnknownBlockType _cfBottomDeleteBlock;
    UILabel *_tipsLabel;
    UIButton *_deleteBtn;
}

@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(copy, nonatomic) CDUnknownBlockType cfBottomDeleteBlock; // @synthesize cfBottomDeleteBlock=_cfBottomDeleteBlock;
- (void).cxx_destruct;
- (void)deleteBtnClicked:(id)arg1;
- (void)setSelectCount:(unsigned long long)arg1 andTotalCount:(unsigned long long)arg2;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
