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
            url: "https://github.com/cartrawler/cartrawler-ios-sdk/releases/download/16.7.1/CarTrawlerSDK.xcframework.zip",
            checksum: "771718dab4b5cf6ae72cde42b6894296f36bfa515a7c83286fd50558ff87ebe2"
        )
    ]
)
