//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISegmentedControl;

@interface DTGroupAnnounceSendDingUrgentLevelCell : UITableViewCell
{
    long long _urgentLevel;
    CDUnknownBlockType _urgentLevelDidChangeCallback;
    UILabel *_label;
    UISegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType urgentLevelDidChangeCallback; // @synthesize urgentLevelDidChangeCallback=_urgentLevelDidChangeCallback;
@property(nonatomic) long long urgentLevel; // @synthesize urgentLevel=_urgentLevel;
- (void).cxx_destruct;
- (void)segmentedControlValueChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
