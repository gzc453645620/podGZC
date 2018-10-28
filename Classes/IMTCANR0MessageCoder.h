//
//  IMTCANR0MessageCoder.h
//  INMOTION
//
//  Created by gzc on 2018/10/16.
//  Copyright © 2018年 Inmotion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IMTCANR0MessageCoder : NSObject

// 解析数据并组包用结构
typedef struct
{
    int    RxPackIndex;                    // 接收到第几个数据了
    int    RxPackEnd;                        // 一共要接收多少个数据
    unsigned short RxPackCheck;            // 报文校验值
    unsigned char RxPackBuffer[256];    //
    
    bool RxPackHand;                    // 报头监测
    bool RxPackHandMaybe;
    unsigned char KeyIndex;
    
    unsigned int RcvOkPack;                // 校验正确的报文数量
    unsigned int RcvErrPack;            // 失败的报文数量
}S_Codec;





@end
