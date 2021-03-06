//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTOACalendarPickerActionLabel, NSString, UIButton;
@protocol DTOACalendarPickerActionBarDelegate;

@interface DTOACalendarPickerActionBar : UIView
{
    id <DTOACalendarPickerActionBarDelegate> _delegate;
    NSString *_firstPrefix;
    NSString *_secondPrefix;
    unsigned long long _style;
    DTOACalendarPickerActionLabel *_firstLabel;
    DTOACalendarPickerActionLabel *_secondLabel;
    UIButton *_rightButton;
    UIView *_line;
    unsigned long long _cIndex;
}

@property(nonatomic) unsigned long long cIndex; // @synthesize cIndex=_cIndex;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) DTOACalendarPickerActionLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) DTOACalendarPickerActionLabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *secondPrefix; // @synthesize secondPrefix=_secondPrefix;
@property(copy, nonatomic) NSString *firstPrefix; // @synthesize firstPrefix=_firstPrefix;
@property(nonatomic) __weak id <DTOACalendarPickerActionBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightButtonPressed:(id)arg1;
- (void)secondLabelPressed:(id)arg1;
- (void)firstLabelPressed:(id)arg1;
- (void)adjustViewComponents;
- (void)layoutSubviews;
- (void)setSecondTitle:(id)arg1;
- (void)setFirstTitle:(id)arg1;
- (void)activeTabIndex:(long long)arg1;
- (void)loadComponets;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 delegate:(id)arg3;

@end

