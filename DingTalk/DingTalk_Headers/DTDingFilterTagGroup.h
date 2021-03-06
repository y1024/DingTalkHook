//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTDingFilter, NSArray, NSDictionary;

@interface DTDingFilterTagGroup : UIView
{
    _Bool _firstTagSelected;
    DTDingFilter *_filter;
    unsigned long long _selectStyle;
    NSDictionary *_selectedTagsDic;
    NSArray *_tags;
    NSArray *_removedTags;
    NSArray *_addedTags;
}

@property(copy, nonatomic) NSArray *addedTags; // @synthesize addedTags=_addedTags;
@property(copy, nonatomic) NSArray *removedTags; // @synthesize removedTags=_removedTags;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSDictionary *selectedTagsDic; // @synthesize selectedTagsDic=_selectedTagsDic;
@property(nonatomic) unsigned long long selectStyle; // @synthesize selectStyle=_selectStyle;
@property(nonatomic) __weak DTDingFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) _Bool firstTagSelected; // @synthesize firstTagSelected=_firstTagSelected;
- (void).cxx_destruct;
- (void)reset;
- (void)removeSelectedTag:(id)arg1;
- (void)addSelectedTag:(id)arg1;
- (void)switchTag:(long long)arg1;
- (void)operationRollBack;
- (id)operationConfirm;
- (_Bool)hasOperationNeedToConfirm;
- (id)filterTagsWithTagStringList:(id)arg1;
- (void)setTagGroupWithFilter:(id)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

@end

