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
            checksum: "4126c26962997f7e4c1c1b9927694f9cc33e4aa115977988bd0adfcf6af42486"
        )
    ]
)
