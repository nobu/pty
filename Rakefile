require "bundler/gem_tasks"
require "rake/testtask"

name = "pty"

Rake::TestTask.new(:test) do |t|
  t.libs << "test/lib"
  t.libs << "lib"
  t.ruby_opts << "-rhelper"
  t.test_files = FileList["test/**/test_*.rb"]
end

if RUBY_ENGINE == "ruby"
  require 'rake/extensiontask'
  Rake::ExtensionTask.new(name)
  task :test => :compile
end

task :default => :test

task :build => "date_epoch"

task "date_epoch" do
  ENV["SOURCE_DATE_EPOCH"] = IO.popen(%W[git -C #{__dir__} log -1 --format=%ct], &:read).chomp
end
