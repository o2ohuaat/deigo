Pod::Spec.new do |s|
  s.name         = "deigo"
  s.version      = "0.0.3"
  s.summary      = "custom control"
  s.homepage     = "https://github.com/o2ohuaat/deigo"
  s.license      = 'MIT'
  s.author       = { "o2ohuaat" => "o2o@yiliangche.net" }
  s.platform     = :ios, '7.0'
  s.source       = {:git => "https://github.com/o2ohuaat/deigo.git" ,
		                :tag => s.version }
 
  pch_AF = <<-EOS
#ifdef __OBJC__

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define SC_TP_UICKEYCHAINSTORE

#endif
EOS
  s.prefix_header_contents = pch_AF
  s.requires_arc = true

  s.subspec 'control' do |s|
    s.platform     = :ios, '7.0'
    s.prefix_header_contents = '#import "SCDGProjectHeaders.h"'
    s.source_files          = 'control/*.{h,m,mm}'
    s.public_header_files   = 'control/SCDGProjectHeaders.h','control/*.h'
    s.dependency   'AFNetworking', '~> 3.1.0'
    s.dependency   'MQTTClient', '~> 0.7.4'
    s.dependency   'UICKeyChainStore', '~> 2.1.0'
    s.dependency   'YYCache', '~> 1.0.3'
    s.dependency   'XRSA', '~> 1.1.1'
    s.dependency   'Realm', '= 1.0.0'
    s.dependency   'deigo/flatbuffers'
    s.requires_arc = true
  end

  s.subspec 'flatbuffers' do |s|
    s.platform     = :ios, '7.0'
    s.prefix_header_contents = '#import "SCDGFlatbufferHeaders.h"'
    s.source_files          = 'flatbuffers/*.{h,m,cpp}'
    s.public_header_files   = 'flatbuffers/SCDGFlatbufferHeaders.h','flatbuffers/Msg*.h'
    s.dependency   'FlatBuffers-ObjC', '~> 0.0.1'
    s.requires_arc = true
  end

  s.subspec 'additions' do |s|
    s.platform     = :ios, '7.0'
    s.prefix_header_contents = '#import "SCDGAdditionHeaders.h"'
    s.source_files          = 'additions/*.{h,m,mm}'
    s.public_header_files   = 'additions/*.h'
    s.dependency   'deigo/control'
    s.dependency   'deigo/flatbuffers'
    s.requires_arc = true
  end
end
