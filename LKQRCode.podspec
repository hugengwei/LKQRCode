Pod::Spec.new do |spec|

  spec.name         = "LKQRCode"
  spec.version      = "0.0.1"
  spec.summary      = "生成二维码"
  spec.homepage     = "https://github.com/hugengwei/LKQRCode"
  spec.license      = "MIT"
  spec.author             = { "hugengwei" => "hugengwei1990@163.com" }
  spec.source       = { :git => "https://github.com/hugengwei/LKQRCode.git", :tag => "#{spec.version}" }
  spec.source_files  = "LKQRCode", "LKQRCode/*.{h,m}"
  spec.requires_arc = true

end
