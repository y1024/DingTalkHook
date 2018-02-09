//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWTableViewCell.h"

#import "DTAvatarViewControlDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class DTBizDingModel, DTDingAttachmentLinkView, DTDingDetailCellSenderView, DTDingImageAttachView, DTDingListAttachAudioView, DTDingListAttachTextViewV2, DTLabel, DTMessageBubbleAttachmentFileView, NSString, UIButton, UIImage, UIImageView, UILabel, UIView;
@protocol DTDingTableViewCellDelegate;

@interface DTDingDetailTableViewCell : SWTableViewCell <TTTAttributedLabelDelegate, DTAvatarViewControlDelegate>
{
    _Bool _isSelected;
    id <DTDingTableViewCellDelegate> _dingDelegate;
    DTBizDingModel *_dingModel;
    long long _cellEditType;
    CDUnknownBlockType _cellSelectedBlock;
    UIImageView *_mainView;
    UIImageView *_mainWisperView;
    UIButton *_checkBoxBtn;
    UIImageView *_labelImageView;
    DTDingListAttachTextViewV2 *_textView;
    UIButton *_readMoreButton;
    DTDingListAttachAudioView *_audioView;
    DTLabel *_deadlineLabel;
    DTLabel *_locationLabel;
    DTLabel *_alarmLabel;
    DTDingImageAttachView *_attachmentImageView;
    DTDingAttachmentLinkView *_attachmentLinkView;
    DTMessageBubbleAttachmentFileView *_attachmentFileView;
    UIView *_currentContentView;
    UILabel *_sendTimeLabel;
    UILabel *_remindTimeLabel;
    UILabel *_remindFrequencyLabel;
    DTDingDetailCellSenderView *_senderView;
    UIButton *_dingStatusBtn;
    UIButton *_finishButton;
    UIButton *_refuseButton;
    UILabel *_detailAttachmentView;
    UIImageView *_selectIconView;
    UIView *_editMaskView;
    UIImage *_dingListConfirmBgImage;
    UIImage *_dingListUnConfirmBgImage;
    UIImageView *_sampleImageView;
}

+ (struct CGSize)audioSizeWithDingModel:(id)arg1 constraintWidth:(double)arg2;
+ (id)unSupportLinkModel;
+ (_Bool)isImageAttachment:(id)arg1;
+ (double)heightOfConent:(id)arg1 textMaxLineCount:(long long)arg2 realLineNum:(long long *)arg3 constraintWidth:(double)arg4;
+ (double)heightOfConent:(id)arg1 textMaxLineCount:(long long)arg2 constraintWidth:(double)arg3;
+ (struct CGSize)attachmentSizeWithDingModel:(id)arg1 constraintWidth:(double)arg2;
+ (double)heightWithDingModel:(id)arg1 textMaxLineCount:(long long)arg2 constraintWidth:(double)arg3;
+ (double)attachMaxWidthWithConstraintWidth:(double)arg1;
@property(retain, nonatomic) UIImageView *sampleImageView; // @synthesize sampleImageView=_sampleImageView;
@property(retain, nonatomic) UIImage *dingListUnConfirmBgImage; // @synthesize dingListUnConfirmBgImage=_dingListUnConfirmBgImage;
@property(retain, nonatomic) UIImage *dingListConfirmBgImage; // @synthesize dingListConfirmBgImage=_dingListConfirmBgImage;
@property(retain, nonatomic) UIView *editMaskView; // @synthesize editMaskView=_editMaskView;
@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
@property(retain, nonatomic) UILabel *detailAttachmentView; // @synthesize detailAttachmentView=_detailAttachmentView;
@property(retain, nonatomic) UIButton *refuseButton; // @synthesize refuseButton=_refuseButton;
@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) UIButton *dingStatusBtn; // @synthesize dingStatusBtn=_dingStatusBtn;
@property(retain, nonatomic) DTDingDetailCellSenderView *senderView; // @synthesize senderView=_senderView;
@property(retain, nonatomic) UILabel *remindFrequencyLabel; // @synthesize remindFrequencyLabel=_remindFrequencyLabel;
@property(retain, nonatomic) UILabel *remindTimeLabel; // @synthesize remindTimeLabel=_remindTimeLabel;
@property(retain, nonatomic) UILabel *sendTimeLabel; // @synthesize sendTimeLabel=_sendTimeLabel;
@property(nonatomic) __weak UIView *currentContentView; // @synthesize currentContentView=_currentContentView;
@property(retain, nonatomic) DTMessageBubbleAttachmentFileView *attachmentFileView; // @synthesize attachmentFileView=_attachmentFileView;
@property(retain, nonatomic) DTDingAttachmentLinkView *attachmentLinkView; // @synthesize attachmentLinkView=_attachmentLinkView;
@property(retain, nonatomic) DTDingImageAttachView *attachmentImageView; // @synthesize attachmentImageView=_attachmentImageView;
@property(retain, nonatomic) DTLabel *alarmLabel; // @synthesize alarmLabel=_alarmLabel;
@property(retain, nonatomic) DTLabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) DTLabel *deadlineLabel; // @synthesize deadlineLabel=_deadlineLabel;
@property(retain, nonatomic) DTDingListAttachAudioView *audioView; // @synthesize audioView=_audioView;
@property(retain, nonatomic) UIButton *readMoreButton; // @synthesize readMoreButton=_readMoreButton;
@property(retain, nonatomic) DTDingListAttachTextViewV2 *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *labelImageView; // @synthesize labelImageView=_labelImageView;
@property(retain, nonatomic) UIButton *checkBoxBtn; // @synthesize checkBoxBtn=_checkBoxBtn;
@property(retain, nonatomic) UIImageView *mainWisperView; // @synthesize mainWisperView=_mainWisperView;
@property(retain, nonatomic) UIImageView *mainView; // @synthesize mainView=_mainView;
@property(copy, nonatomic) CDUnknownBlockType cellSelectedBlock; // @synthesize cellSelectedBlock=_cellSelectedBlock;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long cellEditType; // @synthesize cellEditType=_cellEditType;
@property(readonly, nonatomic) DTBizDingModel *dingModel; // @synthesize dingModel=_dingModel;
@property(nonatomic) __weak id <DTDingTableViewCellDelegate> dingDelegate; // @synthesize dingDelegate=_dingDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)detailAttachDescClicked:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)avatarViewClick:(id)arg1;
- (void)cellScrollViewTapped:(id)arg1;
- (void)finishBtnClicked:(id)arg1;
- (void)readReceiverList:(id)arg1;
- (void)onCommentBriefClicked:(id)arg1;
- (void)onConfirmDing:(id)arg1;
- (void)finishButtonClicked:(id)arg1;
- (void)refuseButtonClicked:(id)arg1;
- (void)attachmentLinkViewPressed:(id)arg1;
- (void)onAttachmentPressed:(id)arg1;
- (void)onSelectCell:(id)arg1;
- (void)focusDingBtnClicked:(id)arg1;
- (void)dingOpenationBtnClicked:(id)arg1;
- (void)onUserNamePressed:(id)arg1;
- (void)onAvatarPress:(id)arg1;
- (void)readMoreButtonTaped:(id)arg1;
- (id)followImageWithFollow:(_Bool)arg1;
- (id)dingListReplyIconWithReddot:(_Bool)arg1;
- (void)updateSelectIconViewImage;
- (void)layoutCellWithEditType:(long long)arg1 animation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAttachment:(id)arg1;
- (void)refreshDingFileAttachmentWithDingModel:(id)arg1 attachmentExtra:(id)arg2;
- (void)refreshDingImageAttachmentWithDingModel:(id)arg1 attachmentExtra:(id)arg2;
- (void)showAttachmentWithLinkModel:(id)arg1;
- (void)refreshMainViewWithDingModel:(id)arg1;
- (void)updateCellScrollViewGesture;
- (void)configRightButtons;
- (void)configMainView;
- (void)configSenderView:(id)arg1;
- (void)configDescInfoWithDing:(id)arg1;
- (void)configAttachmentWithDingModel:(id)arg1;
- (void)configTextAndAudioWithDingModel:(id)arg1;
- (void)configFinishStatus:(id)arg1;
- (void)configRemindInfo;
- (void)configLabelImage:(id)arg1;
- (void)configWithDingModel:(id)arg1 dinglistEditType:(long long)arg2 isSelected:(_Bool)arg3;
- (void)configWithDingModel:(id)arg1 dinglistEditType:(long long)arg2;
- (void)configWithDingModel:(id)arg1;
- (void)loadSubviews;
- (void)layoutAllComponents;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
