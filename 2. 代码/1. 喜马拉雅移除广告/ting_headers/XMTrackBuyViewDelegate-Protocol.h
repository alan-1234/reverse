//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMTrackBuyItem, XMTrackBuyView;

@protocol XMTrackBuyViewDelegate <NSObject>

@optional
- (void)vipButtonDidClick:(NSString *)arg1 andTrackBuy:(XMTrackBuyItem *)arg2;
- (void)startBuyVIP:(XMTrackBuyView *)arg1;
- (void)startBuyLoginFirst:(XMTrackBuyView *)arg1;
- (void)startBuyUseDevice:(XMTrackBuyView *)arg1;
- (void)onFirstBtnClickedBeforeComment:(XMTrackBuyView *)arg1;
- (void)startCommentAfterListen:(XMTrackBuyView *)arg1;
- (void)startBuyMoreAfterAudition:(XMTrackBuyView *)arg1;
- (void)startDownloadLater:(XMTrackBuyView *)arg1;
- (void)startRecharge:(XMTrackBuyView *)arg1 withBuyItem:(XMTrackBuyItem *)arg2;
- (void)startBuyMore:(XMTrackBuyView *)arg1;
- (void)startBuy:(XMTrackBuyView *)arg1;
- (void)closeTrackBuyView:(XMTrackBuyView *)arg1;
@end

