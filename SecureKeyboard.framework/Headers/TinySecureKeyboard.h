//
//  AuthcodeEmbed.h
//  TinyBuilder
//
//  Created by yanzf on 2017/12/18.
//  Copyright © 2017年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecureKeyBoardText.h"
#import "SecuKeyboardInput.h"
#import <JavaScriptCore/JavaScriptCore.h>

NS_ASSUME_NONNULL_BEGIN
@protocol TinySecureKeyboardProtocol <JSExport>


// name = ['rsa', 'aes', 'sm2', 'sm4']
// if name = 'aes', iv should not be nil or undefined
JSExportAs(setupEncode,
- (void)encodeWithName:(NSString *)name key:(NSString *)publicKey iv:(NSString *_Nullable)iv
);

//清空输入框内容
- (void)clear;
//明密文切换
- (void)valueSwitch;

//获取加密结果
- (NSString *)obtainValue;

//设置错误提示内容
JSExportAs(setErrorTip,
- (void)configureErrorTip:(NSString *)tip
);

//错误提示显示隐藏
- (void)showError;

//最大长度显示隐藏
- (void)showCounter;

@end

@interface TinySecureKeyboard : UIView<TinySecureKeyboardProtocol>

@property (nonatomic,strong) SecuKeyboardInput *codeInput;
@property (nonatomic,strong) SecureKeyBoardText *codeText;
@property (nonatomic,strong) NSMutableDictionary *attributeDict;
-(void)configureParam:(NSString *)name value:(id)value;

@property(nonatomic, weak) TESecureKeyboardBgView *wvNumInputView;
-(void)wb_setupTinySecureKeyboard:(NSDictionary *)attributes;

@end

NS_ASSUME_NONNULL_END
