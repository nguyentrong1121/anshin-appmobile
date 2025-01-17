//
//  ZDKConstants.h
//  ZaloSDK.CoreKit
//
//  Created by Hoang Nguyen on 9/22/15.
//  Copyright © 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ZOLoginType){
    ZOLoginTypeUnknown = 0,
    ZOLoginTypeFacebook = 1,
    ZOLoginTypeZalo = 2,
    ZOLoginTypeGooglePlus = 3,
    ZOLoginTypeZingMe = 4,
    ZOLoginTypeGuest = 5,
    ZOLoginTypeApple = 7,
};



typedef NS_ENUM(NSInteger, ZDKErrorCode) {
    ZDKNoneErrorCode,
    ZDKUnknownErrorCode,
    ZDKInvalidErrorCode,
    ZDKTimeoutErrorCode,
    ZDKNetworkErrorCode,
    ZDKEncryptionErrorCode,
    ZDKInvalidParamsErrorCode
};


@interface ZDKConstants : NSObject

@end

#define ZDK_CORE_VERSION @"2.6.0729"
#define kZDKSDKDidFinishGetSDKIDAndPrivateKeyNotification   @"kZDKSDKDidFinishGetSDKIDAndPrivateKeyNotification"
#define kZDKSDKDidFinishGetDeviceIdWithCallbackKeyNotification  @"kZDKSDKDidFinishGetDeviceIdWithCallbackKeyNotification"

#define ZDK_KEYCHAIN_ZALO_SERVICE_NAME          @"vn.vng.zalo.keychain.service"
#define ZDK_KEYCHAIN_ZALO_GLOBAL_IDENTIFIER     @"zgid"
