//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol XMUXPanDistributionGestureRecognizerDelegate;

@interface XMUXPanDistributionGestureRecognizer : UIGestureRecognizer
{
    _Bool _onTouching;
    _Bool _touchMoved;
    id <XMUXPanDistributionGestureRecognizerDelegate> _gestureDelegate;
    struct CGPoint _startPoint;
}

@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) _Bool touchMoved; // @synthesize touchMoved=_touchMoved;
@property(nonatomic) _Bool onTouching; // @synthesize onTouching=_onTouching;
@property(nonatomic) __weak id <XMUXPanDistributionGestureRecognizerDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

