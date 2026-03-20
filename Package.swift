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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.7.0/CarTrawlerSDK.xcframework.zip",
            checksum: "9cedeb1f1ec6adb5cbb6d944654a6239151178e0971891621e758c5a3293e130"
        )
    ]
)
