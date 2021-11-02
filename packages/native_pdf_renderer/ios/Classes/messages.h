// Autogenerated from Pigeon (v1.0.8), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class OpenDataMessage;
@class OpenPathMessage;
@class OpenReply;
@class IdMessage;
@class GetPageMessage;
@class GetPageReply;
@class RenderPageMessage;
@class RenderPageReply;

@interface OpenDataMessage : NSObject
@property(nonatomic, strong, nullable) FlutterStandardTypedData *data;
@end

@interface OpenPathMessage : NSObject
@property(nonatomic, copy, nullable) NSString *path;
@end

@interface OpenReply : NSObject
@property(nonatomic, copy, nullable) NSString *id;
@property(nonatomic, strong, nullable) NSNumber *pagesCount;
@end

@interface IdMessage : NSObject
@property(nonatomic, copy, nullable) NSString *id;
@end

@interface GetPageMessage : NSObject
@property(nonatomic, copy, nullable) NSString *documentId;
@property(nonatomic, strong, nullable) NSNumber *pageNumber;
@end

@interface GetPageReply : NSObject
@property(nonatomic, copy, nullable) NSString *id;
@property(nonatomic, strong, nullable) NSNumber *width;
@property(nonatomic, strong, nullable) NSNumber *height;
@end

@interface RenderPageMessage : NSObject
@property(nonatomic, copy, nullable) NSString *pageId;
@property(nonatomic, strong, nullable) NSNumber *width;
@property(nonatomic, strong, nullable) NSNumber *height;
@property(nonatomic, strong, nullable) NSNumber *format;
@property(nonatomic, copy, nullable) NSString *backgroundColor;
@property(nonatomic, strong, nullable) NSNumber *crop;
@property(nonatomic, strong, nullable) NSNumber *cropX;
@property(nonatomic, strong, nullable) NSNumber *cropY;
@property(nonatomic, strong, nullable) NSNumber *cropHeight;
@property(nonatomic, strong, nullable) NSNumber *cropWidth;
@property(nonatomic, strong, nullable) NSNumber *quality;
@end

@interface RenderPageReply : NSObject
@property(nonatomic, strong, nullable) NSNumber *width;
@property(nonatomic, strong, nullable) NSNumber *height;
@property(nonatomic, copy, nullable) NSString *path;
@property(nonatomic, strong, nullable) FlutterStandardTypedData *data;
@end

/// The codec used by PdfRendererApi.
NSObject<FlutterMessageCodec> *PdfRendererApiGetCodec(void);

@protocol PdfRendererApi
- (void)openDocumentDataMessage:(nullable OpenDataMessage *)message
                     completion:(void (^)(OpenReply *_Nullable, FlutterError *_Nullable))completion;
- (void)openDocumentFileMessage:(nullable OpenPathMessage *)message
                     completion:(void (^)(OpenReply *_Nullable, FlutterError *_Nullable))completion;
- (void)openDocumentAssetMessage:(nullable OpenPathMessage *)message
                      completion:
                          (void (^)(OpenReply *_Nullable, FlutterError *_Nullable))completion;
- (void)closeDocumentMessage:(IdMessage *)message error:(FlutterError *_Nullable *_Nonnull)error;
- (void)getPageMessage:(nullable GetPageMessage *)message
            completion:(void (^)(GetPageReply *_Nullable, FlutterError *_Nullable))completion;
- (void)renderPageMessage:(nullable RenderPageMessage *)message
               completion:(void (^)(RenderPageReply *_Nullable, FlutterError *_Nullable))completion;
- (void)closePageMessage:(IdMessage *)message error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void PdfRendererApiSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                NSObject<PdfRendererApi> *_Nullable api);

NS_ASSUME_NONNULL_END
