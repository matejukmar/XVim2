//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTWeakInterposer_RuntimeWeakReference.h>

@interface DVTAssertingWeakInterposer_RuntimeWeakReference : DVTWeakInterposer_RuntimeWeakReference
{
    Class representedObjectClass;
    void *representedObjectAddress;
}

@property void *representedObjectAddress; // @synthesize representedObjectAddress;
@property Class representedObjectClass; // @synthesize representedObjectClass;
- (void)_customSetup;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;

@end

