//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSScroller.h"

@class NSObject/*<MTMScrollerDelegate>*/;

@interface MTMScroller : NSScroller
{
    BOOL _isFakeScroller;
    BOOL _dontNotify;
    NSObject/*<MTMScrollerDelegate>*/ *_delegate;
}

@property(nonatomic) __weak NSObject/*<MTMScrollerDelegate>*/ *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL dontNotify; // @synthesize dontNotify=_dontNotify;
//- (void).cxx_destruct;
- (void)drawKnob;
@property(nonatomic) BOOL isFakeScroller;
- (void)setDoubleValue:(double)arg1;

@end

