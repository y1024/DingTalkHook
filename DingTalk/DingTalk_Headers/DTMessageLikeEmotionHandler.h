//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageBaseHandler.h"

@class DTLikeEmotionModel, NSArray;

@interface DTMessageLikeEmotionHandler : DTMessageBaseHandler
{
    NSArray *_likeEmotions;
    DTLikeEmotionModel *_nextLikeEmotion;
}

@property(retain, nonatomic) DTLikeEmotionModel *nextLikeEmotion; // @synthesize nextLikeEmotion=_nextLikeEmotion;
@property(retain, nonatomic) NSArray *likeEmotions; // @synthesize likeEmotions=_likeEmotions;
- (void).cxx_destruct;
- (void)saveEmotions:(id)arg1;
- (id)cachedlikeEmotions;
- (void)loadCurrentLikeEmotions;
- (void)preloadLikeEmotion;
- (id)randomLikeEmotion;
- (id)initWithContext:(id)arg1;

@end

