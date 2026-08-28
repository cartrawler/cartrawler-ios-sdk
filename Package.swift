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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.12.0/CarTrawlerSDK.xcframework.zip",
            checksum: "94cdf0a08d784638657e3c3ee9f8c68dacb7d6ff9189edfc07289438a885f8a3"
        )
    ]
)
