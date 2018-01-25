

## Step 1: Install Car Trawler SDK

CarTrawler for iOS supports iOS 9, iOS 10 and iOS 11.

### CocoaPods
CarTrawler uses a [private spec repository](http://guides.cocoapods.org/making/private-cocoapods.html) to publish libraries.

Include the CarTrawler spec repository and pods in your Podfile and run `pod install`:
```ruby    
    source 'https://github.com/cartrawler/cartrawler-ios-pods'
    # Comment the next line if you're not using Swift and don't want to use dynamic frameworks
    use_frameworks!

    pod 'CarTrawlerSDK'
```

#### Sample Complete Podfile
```ruby 
    source 'https://github.com/CocoaPods/Specs.git'
    source 'https://github.com/cartrawler/cartrawler-ios-pods'

    platform :ios, '9.0'

    target ‘MyTarget’ do
      pod 'CarTrawlerSDK', '~> 4.1'
    end
```
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

## Example app Swift ![alt text](http://www.iconninja.com/files/329/840/906/ios-bird-brand-figure-animal-swift-icon.png)

## Example app Swift
There is an example app provided [here](https://github.com/cartrawler/cartrawler-ios/tree/master/Examples) for both Objective-C and Swift.

## Step 2: Setup and Configuration
```swift
    import CarTrawlerSDK 

    let carTrawlerSDK = CarTrawlerSDK()

    @IBAction func carRentalButtonTapped(_ sender: Any) {
        let customAttributes = ["offlineMode": false,
                                "loggingEnabled": true]
        
        let style = customStyle()
        
        carTrawlerSDK.presentCarTrawler(self,
                                        clientID: "123456",
                                        production: true,
                                        language: "EN",
                                        country: "IE",
                                        currency: "EUR",
                                        style: style,
                                        customAttributes: customAttributes)
    }
```

## Example app Objective-C
There is an example app provided [here](https://github.com/cartrawler/cartrawler-ios/tree/master/Examples) for both Objective-C and Swift.

## Step 2: Setup and Configuration
```objc
   @import CarTrawlerSDK;

    - (void)viewDidLoad {
        [super viewDidLoad];
        self.carTrawlerSDK = [CarTrawlerSDK new];
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
    ```
