//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDiffLineDataSource.h>

#import <DVTSourceEditor/DVTFineGrainDiffDataSource-Protocol.h>

@class MISSING_TYPE;
@protocol DVTFineGrainDiffObserver;

@interface _TtC15DVTSourceEditor29DVTSourceEditorDiffDataSource : DVTDiffLineDataSource <DVTFineGrainDiffDataSource>
{
    MISSING_TYPE *fineGrainDiffObserver;
    MISSING_TYPE *dataSourceObserver;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)arrangedContent;
- (id)initWithContent:(id)arg1;
@property(nonatomic, retain) id <DVTFineGrainDiffObserver> fineGrainDiffObserver; // @synthesize fineGrainDiffObserver;

@end

