Pod::Spec.new do |s|

    s.name           = "ELKChainedAlloy"

    s.version        = "1.1.7"

    s.summary        = "基于OC的简单易用的链式编程框架，通过 . 调用方法，实现快速编程"
    s.description    = <<-DESC
                        基于OC的简单易用的链式编程框架，通过 . 调用方法，实现快速编程
                        提供所有系统控件的链式编程方法，提升开发效率
                        持续更新中。。。
                        DESC

    s.homepage       = "https://github.com/CircusJonathan/ELKChained-master"
    s.license        = "MIT"
    s.author         = { "Jonathan" => "Jonathan_dk@163.com" }

    s.platform       = :ios, '8.0'
    s.source         = { :git => "https://github.com/CircusJonathan/ELKChained-master.git", :tag => "#{s.version}" }
    
    s.subspec 'Foundation' do |ss|
        ss.source_files = 'ELKChainedAlloy/Foundation/**/*.{h,m}'
        ss.ios.frameworks = 'Foundation', 'UIKit'
    end

    s.subspec 'UIKit' do |ss|
        ss.source_files = 'ELKChainedAlloy/UIKit/**/*.{h,m}'
        ss.ios.frameworks = 'Foundation', 'UIKit'
    end
    
    s.exclude_files  = "ELKChainedAlloy/Exclude"
    s.public_header_files = 'ELKChainedAlloy/ELKChainedAlloy.h'
    s.source_files   = 'ELKChainedAlloy/ELKChainedAlloy.h'

    s.requires_arc   = true
    s.ios.frameworks = 'Foundation', 'UIKit'


end
