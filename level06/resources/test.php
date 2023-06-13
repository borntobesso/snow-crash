#!/usr/bin/php
<?php
function y($m) { print "111"; $m = preg_replace("/\./", " x ", $m); print "222"; $m = preg_replace("/@/", " y", $m); print "333"; return $m; }
function x($y, $z) { $a = file_get_contents($y); $a = preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")", $a); $a = preg_replace("/\[/", "(", $a); $a = preg_replace("/\]/", ")", $a); return $a; }
$r = x($argv[1], $argv[2]); print $r;
?>
