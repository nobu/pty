# -*- ruby -*-
_VERSION = "0.0.1"

Gem::Specification.new do |s|
  s.name = "pty"
  s.version = _VERSION
  s.summary = "Pseudo tty"
  s.email = "matz@ruby-lang.org"
  s.description = " console capabilities to IO instances."
  s.required_ruby_version = ">= 3.1.0"
  s.homepage = "https://github.com/ruby/pty"
  s.metadata["source_code_url"] = s.homepage
  s.authors = ["Yukihiro Matsumoto"]
  s.require_path = %[lib]
  s.files = %w[
    LICENSE.txt
    README.md
    ext/pty/extconf.rb
    ext/pty/pty.c
    lib/expect.rb
  ]
  s.extensions = %w[ext/pty/extconf.rb]

  s.licenses = ["Ruby", "BSD-2-Clause"]
end
