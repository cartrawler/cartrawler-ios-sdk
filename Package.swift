// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "CarTrawlerSDK",
    platforms: [
        .iOS(.v13)
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
            checksum: "e9a2c5c787ec8fa225731bceb87a1ce87b485843b0d007baf80b19d158c09898"
        )
    ]
)
