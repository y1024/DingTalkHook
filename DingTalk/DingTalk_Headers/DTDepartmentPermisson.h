//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface DTDepartmentPermisson : NSObject
{
    _Bool _on;
    unsigned long long _permissionType;
    NSArray *_permitUsers;
    NSArray *_permitDepts;
}

@property(copy, nonatomic) NSArray *permitDepts; // @synthesize permitDepts=_permitDepts;
@property(copy, nonatomic) NSArray *permitUsers; // @synthesize permitUsers=_permitUsers;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(nonatomic) unsigned long long permissionType; // @synthesize permissionType=_permissionType;
- (void).cxx_destruct;

@end
