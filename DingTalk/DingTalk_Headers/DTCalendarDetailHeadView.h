//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTCalendarDetailHeadViewModel, DTIconTitleView, NSMutableArray, UIButton, UIImageView, UILabel;

@interface DTCalendarDetailHeadView : UIView
{
    UILabel *_subjectLabel;
    UIButton *_attachmentIcon;
    UILabel *_senderNameLabel;
    UIButton *_recipientBtn;
    UIImageView *_firstLine;
    UIImageView *_secondLine;
    NSMutableArray *_tagViews;
    DTIconTitleView *_timeDescView;
    DTIconTitleView *_locationDescView;
    DTIconTitleView *_remindDescView;
    UIButton *_acceptBtn;
    UIButton *_rejectBtn;
    UIButton *_undeterminedBtn;
    DTCalendarDetailHeadViewModel *_model;
}

@property(retain, nonatomic) DTCalendarDetailHeadViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *undeterminedBtn; // @synthesize undeterminedBtn=_undeterminedBtn;
@property(retain, nonatomic) UIButton *rejectBtn; // @synthesize rejectBtn=_rejectBtn;
@property(retain, nonatomic) UIButton *acceptBtn; // @synthesize acceptBtn=_acceptBtn;
@property(retain, nonatomic) DTIconTitleView *remindDescView; // @synthesize remindDescView=_remindDescView;
@property(retain, nonatomic) DTIconTitleView *locationDescView; // @synthesize locationDescView=_locationDescView;
@property(retain, nonatomic) DTIconTitleView *timeDescView; // @synthesize timeDescView=_timeDescView;
@property(retain, nonatomic) NSMutableArray *tagViews; // @synthesize tagViews=_tagViews;
@property(retain, nonatomic) UIImageView *secondLine; // @synthesize secondLine=_secondLine;
@property(retain, nonatomic) UIImageView *firstLine; // @synthesize firstLine=_firstLine;
@property(retain, nonatomic) UIButton *recipientBtn; // @synthesize recipientBtn=_recipientBtn;
@property(retain, nonatomic) UILabel *senderNameLabel; // @synthesize senderNameLabel=_senderNameLabel;
@property(retain, nonatomic) UIButton *attachmentIcon; // @synthesize attachmentIcon=_attachmentIcon;
@property(retain, nonatomic) UILabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
- (void).cxx_destruct;
- (id)actionBtnWithTitle:(id)arg1;
- (void)onClickRecipient:(id)arg1;
- (void)resetButtonsStatus;
- (void)layoutComponents;
- (void)configWithModel:(id)arg1;
- (void)loadComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

