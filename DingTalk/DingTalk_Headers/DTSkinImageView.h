//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface DTSkinImageView : UIImageView
{
    _Bool _isEndableChangeTheme;
    NSString *_imageName;
}

+ (id)imageWithNotification:(id)arg1;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)whenThemeChange;
- (void)themeChange;
- (id)initWithFrameWithNotification:(struct CGRect)arg1;
@property(nonatomic) _Bool isEnableChangeTheme; // @synthesize isEnableChangeTheme=_isEndableChangeTheme;
- (id)initImageWithNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
