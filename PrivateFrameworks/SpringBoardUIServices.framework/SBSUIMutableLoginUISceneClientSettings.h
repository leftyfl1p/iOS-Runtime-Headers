/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIMutableLoginUISceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int idleTimerMode;
@property (nonatomic) int rotationMode;
@property (nonatomic, copy) NSString *statusBarUserNameOverride;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)idleTimerMode;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (int)rotationMode;
- (void)setIdleTimerMode:(int)arg1;
- (void)setRotationMode:(int)arg1;
- (void)setStatusBarUserNameOverride:(id)arg1;
- (id)statusBarUserNameOverride;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

@end
