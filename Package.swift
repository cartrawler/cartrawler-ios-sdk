// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "CarTrawlerSDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "CarTrawlerSDK",
            targets: ["CarTrawlerSDK"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "CarTrawlerSDK",
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.12.1/CarTrawlerSDK.xcframework.zip",
            checksum: "fd304a409f71347226ae7329e1af424ea8cf40b407327a2fc3c2e08dd3219067"
        )
    ]
)
