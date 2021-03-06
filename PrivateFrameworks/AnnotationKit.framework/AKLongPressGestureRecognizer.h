/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKLongPressGestureRecognizer : UILongPressGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {
    BOOL  _penGestureDetected;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL penGestureDetected;
@property (readonly) Class superclass;

- (void)_checkTouchesForStylus:(id)arg1;
- (BOOL)penGestureDetected;
- (void)reset;
- (void)setPenGestureDetected:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
