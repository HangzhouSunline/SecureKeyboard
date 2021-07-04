Pod::Spec.new do |s|

# ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
s.name         = "SecureKeyboard"
s.version      = "1.0.2"
s.summary      = "SecureKeyboard"
s.description  = <<-DESC
               密码键盘
               DESC
s.homepage     = "https://github.com/HangzhouSunline/SecureKeyboard"
s.license      = { :type => "MIT"}
s.author             = { "葛晓良" => "gexiaoliang@sunline.cn" }
s.ios.deployment_target = "9.0"
s.source       = { :git => "https://github.com/HangzhouSunline/SecureKeyboard.git", :tag => "#{s.version}" }


s.vendored_frameworks = 'SecureKeyboard.framework'
s.resource  = 'SecureKeyboard.bundle'
s.frameworks = "UIKit", "Foundation"
s.dependency 'TYWebView', '~> 1.0'

end

