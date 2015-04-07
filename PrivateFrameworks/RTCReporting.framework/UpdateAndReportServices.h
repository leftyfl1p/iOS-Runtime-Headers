/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface UpdateAndReportServices : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    bool _report;
    bool _update;
}

@property(copy) id block;
@property(readonly) bool report;
@property(readonly) bool update;

- (id)block;
- (void)dealloc;
- (id)initWithServices:(bool)arg1 needToReport:(bool)arg2 service:(id)arg3;
- (bool)report;
- (void)setBlock:(id)arg1;
- (bool)update;

@end