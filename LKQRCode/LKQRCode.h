//
//  LKQRCode.h
//  QRCodeDemo
//
//  Created by 胡庚伟 on 2018/12/24.
//  Copyright © 2018 胡庚伟. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKQRCode : NSObject

/**
 生产二维码图片

 @param content 二维码内容
 @param size 二维码尺寸
 @return 二维码图片
 */
+ (UIImage *)lk_outputQRCodeWithContent:(NSString *)content withSize:(CGFloat)size;
@end

NS_ASSUME_NONNULL_END
