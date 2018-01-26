// Generated by json_to_model

#import <Foundation/Foundation.h>


@interface Profile : NSObject

- (id)initWithJSONData:(NSData *)data;
- (id)initWithJSONDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)JSONDictionary;
- (NSData *)JSONData;

@property (nonatomic, copy) NSString * server;

@property (nonatomic, assign) NSInteger serverPort;

@property (nonatomic, copy) NSString * remarks;

@property (nonatomic, copy) NSString * password;

@property (nonatomic, copy) NSString * method;

@property(nonatomic, copy) NSString *protocol;
@property(nonatomic, copy) NSString *protocolParam;
@property(nonatomic, copy) NSString *obfs;
@property(nonatomic, copy) NSString *obfsParam;

@end
