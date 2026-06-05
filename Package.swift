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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.9.1/CarTrawlerSDK.xcframework.zip",
            checksum: "050f3456fc2af8913b60d8841344c11f26c83d3a03f80c4d4e0cd20cce062f34"
        )
    ]
)
