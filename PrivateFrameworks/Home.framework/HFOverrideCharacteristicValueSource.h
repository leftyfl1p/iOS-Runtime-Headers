/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFOverrideCharacteristicValueSource : NSObject <HFCharacteristicValueSource> {
    <HFCharacteristicValueSource> * _originalValueSource;
    <HFOverrideCharacteristicValueProvider> * _overrideValueProvider;
}

@property (nonatomic, readonly) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *originalValueSource;
@property (nonatomic) <HFOverrideCharacteristicValueProvider> *overrideValueProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)contextProvider;
- (id)initWithOriginalValueSource:(id)arg1 overrideValueProvider:(id)arg2;
- (id)originalValueSource;
- (id)overrideValueProvider;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (void)setOverrideValueProvider:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;

@end
