//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTNameCard : NSObject
{
    NSString *_nameCardMediaId;
    NSArray *_itemList;
}

@property(copy, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(copy, nonatomic) NSString *nameCardMediaId; // @synthesize nameCardMediaId=_nameCardMediaId;
- (void).cxx_destruct;
- (id)cardDictionary;

@end
