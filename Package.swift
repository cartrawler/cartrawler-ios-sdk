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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.11.0/CarTrawlerSDK.xcframework.zip",
            checksum: "6cfbb744113283adebbcf7b272ce458be52b79e32ab23ac8ec2e7aaf3de6d98d"
        )
    ]
)
