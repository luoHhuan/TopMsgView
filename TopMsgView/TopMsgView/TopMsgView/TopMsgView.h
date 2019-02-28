//
//  TopMsgView.h
//  TopMsgView
//
//  Created by rp.wang on 2019/2/28.
//  Copyright © 2019 Luoh. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//屏幕高度
#define kHeight [[UIScreen mainScreen] bounds].size.height
//屏幕宽度
#define kWidth [[UIScreen mainScreen] bounds].size.width
//快速生成颜色
#define kColor(r, g, b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
//快速产生字体
#define kFont(n) [UIFont systemFontOfSize:(n)]

@interface TopMsgView : UIView

+ (void)showInView:(UIScrollView *)view content:(NSString *)content;

@end

NS_ASSUME_NONNULL_END
