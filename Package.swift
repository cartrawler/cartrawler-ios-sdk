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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.11.2/CarTrawlerSDK.xcframework.zip",
            checksum: "a7a36855759a686c026365137b89ea1ce875278a290b59b1579281ce0b319e67"
        )
    ]
)
