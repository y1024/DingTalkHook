//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizConversation, DTBizMessage, DTMessageCollectionViewCell;

@protocol DTMessageCollectionViewCellDataSource <NSObject>

@optional
- (_Bool)isSelectStyle:(DTMessageCollectionViewCell *)arg1;
- (DTBizConversation *)bubbleConversation:(DTMessageCollectionViewCell *)arg1;
- (DTBizMessage *)bubbleMessage:(DTMessageCollectionViewCell *)arg1;
@end

