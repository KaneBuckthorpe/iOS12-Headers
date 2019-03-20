/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 20, 2019 at 11:33:29 AM Greenwich Mean Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/ControlCenter/Bundles/AudioModule.bundle/AudioModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIContentModule.h>
#import <ControlCenterUIKit/CCUIAudioModuleViewControllerDelegate.h>

@class CCUIAudioModuleViewController, CCUISliderModuleBackgroundViewController, NSString;

@interface CCUIAudioModule : NSObject <CCUIContentModule, CCUIAudioModuleViewControllerDelegate> {

	CCUIAudioModuleViewController* _moduleViewController;
	CCUISliderModuleBackgroundViewController* _backgroundViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)_audioGlyphPackageDescription;
-(id)_audioGlyphStateForVolumeLevel:(double)arg1 ;
-(void)audioModuleViewController:(id)arg1 volumeDidChange:(float)arg2 ;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
@end

