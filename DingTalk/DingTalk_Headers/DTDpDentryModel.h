//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTCSpaceDentryEncryptDetail, NSNumber, NSString;

@interface DTDpDentryModel : Marshal
{
    NSNumber *_id_;
    NSString *_fileId;
    NSString *_name;
    NSString *_path;
    NSNumber *_spaceId;
    NSNumber *_type;
    NSNumber *_length;
    NSNumber *_createTime;
    NSNumber *_modifyTime;
    NSNumber *_operateTime;
    NSNumber *_operationId;
    NSString *_contentType;
    NSNumber *_downloadCount;
    NSNumber *_previewCount;
    NSNumber *_transferCount;
    NSNumber *_encrypt;
    DTCSpaceDentryEncryptDetail *_encryptDetail;
}

@property(retain, nonatomic) DTCSpaceDentryEncryptDetail *encryptDetail; // @synthesize encryptDetail=_encryptDetail;
@property(retain, nonatomic) NSNumber *encrypt; // @synthesize encrypt=_encrypt;
@property(retain, nonatomic) NSNumber *transferCount; // @synthesize transferCount=_transferCount;
@property(retain, nonatomic) NSNumber *previewCount; // @synthesize previewCount=_previewCount;
@property(retain, nonatomic) NSNumber *downloadCount; // @synthesize downloadCount=_downloadCount;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSNumber *operationId; // @synthesize operationId=_operationId;
@property(retain, nonatomic) NSNumber *operateTime; // @synthesize operateTime=_operateTime;
@property(retain, nonatomic) NSNumber *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *spaceId; // @synthesize spaceId=_spaceId;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSNumber *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

