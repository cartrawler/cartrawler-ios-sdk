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
            checksum: "e7eb095944eaff68d6b4b18f82b6c3a376e831fd93b2eaf1c994e47a2e5ba88a"
        )
    ]
)
