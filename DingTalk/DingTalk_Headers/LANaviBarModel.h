//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface LANaviBarModel : NSObject
{
    NSString *_titleHolder;
    NSString *_fixedTitle;
    UIColor *_custNaviBarColor;
}

+ (id)naviBarModelWithTitleHolder:(id)arg1 fixedTitle:(id)arg2;
@property(retain, nonatomic) UIColor *custNaviBarColor; // @synthesize custNaviBarColor=_custNaviBarColor;
@property(copy, nonatomic) NSString *fixedTitle; // @synthesize fixedTitle=_fixedTitle;
@property(copy, nonatomic) NSString *titleHolder; // @synthesize titleHolder=_titleHolder;
- (void).cxx_destruct;
- (void)private_setFixedTitle:(id)arg1;

@end
