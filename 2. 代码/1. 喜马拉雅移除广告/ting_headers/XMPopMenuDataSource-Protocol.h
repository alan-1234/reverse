//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIColor, UIView, XMPopMenuView;

@protocol XMPopMenuDataSource <NSObject>

@optional
- (UIView *)popMenuView:(XMPopMenuView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)popMenuView:(XMPopMenuView *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)popMenuView:(XMPopMenuView *)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInPopMenuView:(XMPopMenuView *)arg1;
- (Class)cellClassForPopMenuView:(XMPopMenuView *)arg1;
- (struct CGSize)popMenuView:(XMPopMenuView *)arg1 contentSizeThatFits:(struct CGSize)arg2;
- (UIColor *)tintColorForPopMenuView:(XMPopMenuView *)arg1;
@end

