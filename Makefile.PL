use ExtUtils::MakeMaker;

# Makefile.PL for Win32::NetPacket
# v 0.1 (08/04/2003)
# -------------------------------------
# Set the path to the WPcap library :

my $WPCAP = 'F:\VisualC++\WPdpack';

# **************************************

unless (-e $WPCAP.'\Lib\Packet.lib') {
print << 'ERR';
Error:  WinPcap library not found.
Set the path to this library in Makefile.PL and run 'perl Makefile.PL' again.
ERR
;
exit;
}

my $sockfile;
foreach (@INC) {  # looking for socket.h
  if (-e $_.'/CORE/sys/socket.h') {
    $sockfile = $_.'/CORE/sys/socket.h';
    last;
  }
}
die "file \"socket.h\" not found" unless $sockfile;
open H, "< $sockfile" or die $!;
my $h;
{
  local $/;
  $h = <H>;
}
close H;

my $ifdef = <<'IFDEF';  # patch for socket.h
/* patch for WinPCap
   original file renamed 'socket.h.orig'
*/
#ifdef WINSOCK2_H_REQUESTED
#include <winsock2.h>
#else
#include <winsock.h>
#endif
/* end of patch */
IFDEF
;

if ($h =~ /\#include <winsock2.h>/) {
  print "socket.h already patched...Ok\n"
}
else {
  if (rename $sockfile, $sockfile.'.orig') {
    $h =~ s/#include <winsock.h>/$ifdef/;
    open H, "> $sockfile" or die $!;
    print H $h;
    close H;
    print "socket.h patched...Ok\n"
  }
  else {
    print "Unable to patch socket.h\n"
  }
}

# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    'NAME'		=> 'Win32::NetPacket',
    'VERSION_FROM'	=> 'NetPacket.pm', # finds $VERSION
    'PREREQ_PM'		=> {}, # e.g., Module::Name => 1.1
    ($] >= 5.005 ?    ## Add these new keywords supported since 5.005
      (ABSTRACT_FROM => 'NetPacket.pm', # retrieve abstract from module
       AUTHOR     => 'Jean-Louis Morel <jl_morel@bribes.org>') : ()),
    'LIBS'		=> ["$WPCAP\\Lib\\Packet.lib"], # e.g., '-lm'
    'DEFINE'		=> '', # e.g., '-DHAVE_SOMETHING'
	# Insert -I. if you add *.h files later:
    'INC'		=> "-I$WPCAP\\Include", # e.g., '-I/usr/include/other'
	# Un-comment this if you add C files to link with later:
    # 'OBJECT'		=> '$(O_FILES)', # link all the C files too
);

