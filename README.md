

## Step 1: Install Car Trawler SDK

CarTrawler for iOS supports iOS 8, iOS 9, iOS 10 and iOS 11.

### CocoaPods
Car Trawler uses a [private spec repository](http://guides.cocoapods.org/making/private-cocoapods.html) to publish libraries.

Include the CarTrawler spec repository and pods in your Podfile and run `pod install`:

    source 'https://github.com/cartrawler/cartrawler-ios-pods'

    pod 'CarTrawlerSDK',
    pod 'CTPayment'

#### Sample Complete Podfile

    source 'https://github.com/CocoaPods/Specs.git'
    source 'https://github.com/cartrawler/cartrawler-ios-pods'

    platform :ios, '8.0'

    target ‘MyTarget’ do
      pod 'CarTrawlerSDK', '~> 4.1'
      pod 'CTPayment', '~> 1.0'
    end

### Carthage
1. Add `github "cartrawler/cartrawler-ios-sdk"` to your Cartfile.
2. Run carthage update.
3. Go to your Xcode project's "General" settings. Drag `CarTrawlerSDK.framework` from `Carthage/Build/iOS` to the "Embedded Binaries" section. Make sure “Copy items if needed” is selected and click Finish.

### Manual Installation

1. [Download Car Trawler for iOS](https://github.com/cartrawler/cartrawler-ios-sdk/archive/master.zip) and extract the zip.
2. Go to your Xcode project's "General" settings. Drag `CarTrawlerSDK.framework` to the "Embedded Binaries" section. Make sure "Copy items if needed" is selected and click Finish.
3. Create a new "Run Script Phase" in your app’s target’s "Build Phases" and paste the following snippet in the script text field:

        bash "${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/CarTrawlerSDK.framework/strip-frameworks.sh"
        bash "${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/CTPayment.framework/strip-frameworks.sh"
        
This step is required to work around an [App Store submission bug](http://www.openradar.me/radar?id=6409498411401216) when archiving universal binaries.

## Example app
There is an example app provided [here](https://github.com/cartrawler/cartrawler-ios/tree/master/Examples) for both Objective-C and Swift.

## Step 2: Setup and Configuration

    @import CarTrawlerSDK;

    - (void)viewDidLoad {
        [super viewDidLoad];
        self.carTrawlerSDK = [CTCarTrawlerSDK new];
    }

    - (void)carRentalButtonTapped {
        [self.sdk presentCarTrawler:self
                           clientID:@"123456"
                         production:YES
                           language:@"EN"
                            country:@"IE"
                           currency:@"EUR"
                               user:nil
                              style:nil
                   customAttributes:customAttributes];
    }
