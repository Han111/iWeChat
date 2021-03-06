//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MultiTalkSessionItem : MMObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int lastMessageID;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *createUserName;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)lastMessageID;
+ (const struct WCTProperty *)createUserName;
+ (const struct WCTProperty *)clientGroupID;
+ (const struct WCTProperty *)groupID;
+ (const struct WCTProperty *)localID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) unsigned int lastMessageID; // @synthesize lastMessageID;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isSessionItemValid;
- (void)dealloc;

@end

