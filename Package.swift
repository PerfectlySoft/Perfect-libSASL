// swift-tools-version:4.0
import PackageDescription

let package = Package(
    name: "SASL",
    providers: [
          .apt(["libsasl2-dev"])
    ]
)
