//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WXAppConfiguration : NSObject
{
    NSString *_appGroup;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_externalUA;
    NSString *_JSFrameworkVersion;
    NSArray *_customizeProtocolClasses;
}

+ (void)setCustomizeProtocolClasses:(id)arg1;
+ (id)customizeProtocolClasses;
+ (void)setJSFrameworkVersion:(id)arg1;
+ (id)JSFrameworkVersion;
+ (void)setExternalUserAgent:(id)arg1;
+ (id)externalUserAgent;
+ (void)setAppVersion:(id)arg1;
+ (id)appVersion;
+ (void)setAppName:(id)arg1;
+ (id)appName;
+ (void)setAppGroup:(id)arg1;
+ (id)appGroup;
+ (id)sharedConfiguration;
@property(retain, nonatomic) NSArray *customizeProtocolClasses; // @synthesize customizeProtocolClasses=_customizeProtocolClasses;
@property(retain, nonatomic) NSString *JSFrameworkVersion; // @synthesize JSFrameworkVersion=_JSFrameworkVersion;
@property(retain, nonatomic) NSString *externalUA; // @synthesize externalUA=_externalUA;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appGroup; // @synthesize appGroup=_appGroup;
- (void).cxx_destruct;

@end
