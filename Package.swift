import PackageDescription

let package = Package(
    name: "SASL",
    providers: [
          .Apt("libsasl2-dev")
    ]
)
