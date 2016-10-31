Pod::Spec.new do |s|
s.name     = 'HHKJOpenAPI'
s.version  = '1.0.0'
s.license= { :type => "MIT", :file => "LICENSE" }
s.summary  = 'A delightful iOS networking framework.'
s.homepage = 'https://github.com/HzHenghaokeji/HHKJOpenAPI'
s.authors  = { 'Kevin Wang' => 'wangw@henghaojijin.com' }
s.source   = { :git => 'https://github.com/HzHenghaokeji/HHKJOpenAPI.git', :tag => s.version, :submodules => true }
s.social_media_url   = 'http://www.winjijin.com'
s.requires_arc = true
s.ios.deployment_target = '8.0'
s.source_files = 'RtFundOpenAPI.framework/*'
end
