//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTGraffitiTextView;

@interface DTGraffitiUndoItem : NSObject
{
    unsigned long long _undoType;
    DTGraffitiTextView *_textView;
}

@property(retain, nonatomic) DTGraffitiTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) unsigned long long undoType; // @synthesize undoType=_undoType;
- (void).cxx_destruct;

@end

