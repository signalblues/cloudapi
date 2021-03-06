#import <Foundation/Foundation.h>
#import "SWGInlineResponse400.h"
#import "SWGInlineResponse200.h"
#import "SWGApi.h"

/**
* OpenALPR Cloud API
* No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 2.0.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


@interface SWGDefaultApi: NSObject <SWGApi>

extern NSString* kSWGDefaultApiErrorDomain;
extern NSInteger kSWGDefaultApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// 
/// Send an image for OpenALPR to analyze and provide metadata back The image is sent as base64 encoded bytes. 
///
/// @param imageBytes The image file that you wish to analyze encoded in base64 
/// @param secretKey The secret key used to authenticate your account.  You can view your  secret key by visiting  https://cloud.openalpr.com/ 
/// @param country Defines the training data used by OpenALPR.  \&quot;us\&quot; analyzes  North-American style plates.  \&quot;eu\&quot; analyzes European-style plates.  This field is required if using the \&quot;plate\&quot; task  You may use multiple datasets by using commas between the country  codes.  For example, &#39;au,auwide&#39; would analyze using both the  Australian plate styles.  A full list of supported country codes  can be found here https://github.com/openalpr/openalpr/tree/master/runtime_data/config 
/// @param recognizeVehicle If set to 1, the vehicle will also be recognized in the image This requires an additional credit per request  (optional) (default to 0)
/// @param state Corresponds to a US state or EU country code used by OpenALPR pattern  recognition.  For example, using \&quot;md\&quot; matches US plates against the  Maryland plate patterns.  Using \&quot;fr\&quot; matches European plates against  the French plate patterns.  (optional) (default to )
/// @param returnImage If set to 1, the image you uploaded will be encoded in base64 and  sent back along with the response  (optional) (default to 0)
/// @param topn The number of results you would like to be returned for plate  candidates and vehicle classifications  (optional) (default to 10)
/// @param prewarp Prewarp configuration is used to calibrate the analyses for the  angle of a particular camera.  More information is available here http://doc.openalpr.com/accuracy_improvements.html#calibration  (optional) (default to )
/// 
///  code:200 message:"OK",
///  code:400 message:"Parameter is invalid",
///  code:401 message:"User not authorized or invalid secret_key",
///  code:402 message:"Monthly usage limit exceeded",
///  code:403 message:"Temporary rate-limit exceeded"
///
/// @return SWGInlineResponse200*
-(NSNumber*) recognizeBytesWithImageBytes: (NSString*) imageBytes
    secretKey: (NSString*) secretKey
    country: (NSString*) country
    recognizeVehicle: (NSNumber*) recognizeVehicle
    state: (NSString*) state
    returnImage: (NSNumber*) returnImage
    topn: (NSNumber*) topn
    prewarp: (NSString*) prewarp
    completionHandler: (void (^)(SWGInlineResponse200* output, NSError* error)) handler;


/// 
/// Send an image for OpenALPR to analyze and provide metadata back The image is sent as a file using a form data POST 
///
/// @param image The image file that you wish to analyze 
/// @param secretKey The secret key used to authenticate your account.  You can view your  secret key by visiting  https://cloud.openalpr.com/ 
/// @param country Defines the training data used by OpenALPR.  \&quot;us\&quot; analyzes  North-American style plates.  \&quot;eu\&quot; analyzes European-style plates.  This field is required if using the \&quot;plate\&quot; task  You may use multiple datasets by using commas between the country  codes.  For example, &#39;au,auwide&#39; would analyze using both the  Australian plate styles.  A full list of supported country codes  can be found here https://github.com/openalpr/openalpr/tree/master/runtime_data/config 
/// @param recognizeVehicle If set to 1, the vehicle will also be recognized in the image This requires an additional credit per request  (optional) (default to 0)
/// @param state Corresponds to a US state or EU country code used by OpenALPR pattern  recognition.  For example, using \&quot;md\&quot; matches US plates against the  Maryland plate patterns.  Using \&quot;fr\&quot; matches European plates against  the French plate patterns.  (optional) (default to )
/// @param returnImage If set to 1, the image you uploaded will be encoded in base64 and  sent back along with the response  (optional) (default to 0)
/// @param topn The number of results you would like to be returned for plate  candidates and vehicle classifications  (optional) (default to 10)
/// @param prewarp Prewarp configuration is used to calibrate the analyses for the  angle of a particular camera.  More information is available here http://doc.openalpr.com/accuracy_improvements.html#calibration  (optional) (default to )
/// 
///  code:200 message:"OK",
///  code:400 message:"Parameter is invalid",
///  code:401 message:"User not authorized or invalid secret_key",
///  code:402 message:"Monthly usage limit exceeded",
///  code:403 message:"Temporary rate-limit exceeded"
///
/// @return SWGInlineResponse200*
-(NSNumber*) recognizeFileWithImage: (NSURL*) image
    secretKey: (NSString*) secretKey
    country: (NSString*) country
    recognizeVehicle: (NSNumber*) recognizeVehicle
    state: (NSString*) state
    returnImage: (NSNumber*) returnImage
    topn: (NSNumber*) topn
    prewarp: (NSString*) prewarp
    completionHandler: (void (^)(SWGInlineResponse200* output, NSError* error)) handler;


/// 
/// Send an image for OpenALPR to analyze and provide metadata back The image is sent as a URL.  The OpenALPR service will download the image  and process it 
///
/// @param imageUrl A URL to an image that you wish to analyze 
/// @param secretKey The secret key used to authenticate your account.  You can view your  secret key by visiting  https://cloud.openalpr.com/ 
/// @param country Defines the training data used by OpenALPR.  \&quot;us\&quot; analyzes  North-American style plates.  \&quot;eu\&quot; analyzes European-style plates.  This field is required if using the \&quot;plate\&quot; task  You may use multiple datasets by using commas between the country  codes.  For example, &#39;au,auwide&#39; would analyze using both the  Australian plate styles.  A full list of supported country codes  can be found here https://github.com/openalpr/openalpr/tree/master/runtime_data/config 
/// @param recognizeVehicle If set to 1, the vehicle will also be recognized in the image This requires an additional credit per request  (optional) (default to 0)
/// @param state Corresponds to a US state or EU country code used by OpenALPR pattern  recognition.  For example, using \&quot;md\&quot; matches US plates against the  Maryland plate patterns.  Using \&quot;fr\&quot; matches European plates against  the French plate patterns.  (optional) (default to )
/// @param returnImage If set to 1, the image you uploaded will be encoded in base64 and  sent back along with the response  (optional) (default to 0)
/// @param topn The number of results you would like to be returned for plate  candidates and vehicle classifications  (optional) (default to 10)
/// @param prewarp Prewarp configuration is used to calibrate the analyses for the  angle of a particular camera.  More information is available here http://doc.openalpr.com/accuracy_improvements.html#calibration  (optional) (default to )
/// 
///  code:200 message:"OK",
///  code:400 message:"Parameter is invalid",
///  code:401 message:"User not authorized or invalid secret_key",
///  code:402 message:"Monthly usage limit exceeded",
///  code:403 message:"Temporary rate-limit exceeded"
///
/// @return SWGInlineResponse200*
-(NSNumber*) recognizeUrlWithImageUrl: (NSString*) imageUrl
    secretKey: (NSString*) secretKey
    country: (NSString*) country
    recognizeVehicle: (NSNumber*) recognizeVehicle
    state: (NSString*) state
    returnImage: (NSNumber*) returnImage
    topn: (NSNumber*) topn
    prewarp: (NSString*) prewarp
    completionHandler: (void (^)(SWGInlineResponse200* output, NSError* error)) handler;



@end
