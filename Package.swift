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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.9.0/CarTrawlerSDK.xcframework.zip",
            checksum: "353eed97242f3d45f09fd599f180178e544d068282d208a2ee8e73dc9b5e0bdc"
        )
    ]
)
