//
//  UIView+Empty.h
//  Demo
//
//  Created by 酌晨茗 on 15/12/2.
//  Copyright © 2015年 酌晨茗. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^RefreshBlock)();

@interface UIView (Empty)

@property (nonatomic, strong, readonly) UIView *bottomView;

@property (nonatomic, copy) RefreshBlock block;

- (void)showNetWorkErrorWithRefresh:(RefreshBlock)block;

- (void)showEmptyViewWithRefresh:(RefreshBlock)block;

- (void)showWithImageName:(NSString *)imageName
                    title:(NSString *)title
              detailTitle:(NSString *)detailTitle
              buttonTitle:(NSString *)buttonTitle
                  refresh:(RefreshBlock)block;

- (void)removeEmptyView;

@end
