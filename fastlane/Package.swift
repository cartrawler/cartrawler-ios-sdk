// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "CarTrawlerSDK",
    platforms: [
        .iOS(.v11)
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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.6.0/CarTrawlerSDK.xcframework.zip",
            checksum: "fd3961ec47c931bea5b8533364100c6fcd72cf11146847916cb325c53ef5e0ec"
        )
    ]
)
