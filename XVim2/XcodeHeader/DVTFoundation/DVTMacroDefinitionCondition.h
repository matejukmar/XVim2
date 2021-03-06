//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class DVTMacroDefinitionConditionParameter, NSString;

@interface DVTMacroDefinitionCondition : NSObject <NSCopying>
{
    DVTMacroDefinitionConditionParameter *_parameter;
    NSString *_valuePattern;
}

+ (id)conditionWithParameterName:(id)arg1 valuePattern:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)subscriptRepresentation;
- (long long)compare:(id)arg1;
- (BOOL)evaluateInScope:(id)arg1;
- (BOOL)evaluateForParameterValues:(id)arg1;
@property(readonly) NSString *valuePattern;
@property(readonly) DVTMacroDefinitionConditionParameter *parameter;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameterName:(id)arg1 valuePattern:(id)arg2;

@end

