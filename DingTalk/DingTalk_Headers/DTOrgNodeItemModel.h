//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

#import "JSONCollectionType-Protocol.h"

@class DTLabelModel, DTOrgDeptModel, DTOrgEmployeeModel, DTOrgPermissionModel, DTUserProfileModel, NSArray, NSNumber, NSString;

@interface DTOrgNodeItemModel : Marshal <JSONCollectionType>
{
    NSNumber *_nodeType;
    DTOrgEmployeeModel *_employee;
    DTOrgDeptModel *_dept;
    NSArray *_masterNodeList;
    DTOrgPermissionModel *_permission;
    DTUserProfileModel *_userProfile;
    NSNumber *_count;
    NSString *_hitField;
    DTLabelModel *_label;
}

@property(retain, nonatomic) DTLabelModel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *hitField; // @synthesize hitField=_hitField;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) DTUserProfileModel *userProfile; // @synthesize userProfile=_userProfile;
@property(retain, nonatomic) DTOrgPermissionModel *permission; // @synthesize permission=_permission;
@property(copy, nonatomic) NSArray *masterNodeList; // @synthesize masterNodeList=_masterNodeList;
@property(retain, nonatomic) DTOrgDeptModel *dept; // @synthesize dept=_dept;
@property(retain, nonatomic) DTOrgEmployeeModel *employee; // @synthesize employee=_employee;
@property(retain, nonatomic) NSNumber *nodeType; // @synthesize nodeType=_nodeType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;
- (Class)arrayElementTypeForFieldName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

