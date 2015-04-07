/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SKStoreProductViewController, SKUIIPhoneProductPageViewController, SKUIStorePageViewController, UIViewController;

@interface SUSKUIStorePageViewController : SUViewController <SKStoreProductViewControllerDelegatePrivate, SKUIIPhoneProductPageDelegate> {
    UIViewController *_activeChildViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKStoreProductViewController *_remoteProductViewController;
    SKUIStorePageViewController *_storePageViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_loadClientContextWithCompletionBlock:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2;
- (void)_showProductPageWithPageDictionary:(id)arg1;
- (void)_showRemoteViewControllerWithPageDictionary:(id)arg1;
- (void)_showStorePageWithPageDictionary:(id)arg1;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (BOOL)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (BOOL)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (id)initWithSection:(id)arg1;
- (void)loadView;
- (void)productViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(BOOL)arg3;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;

@end