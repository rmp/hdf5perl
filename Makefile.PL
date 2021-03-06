# -*- mode: cperl; tab-width: 8; indent-tabs-mode: nil; basic-offset: 2 -*-
# vim:ts=8:sw=2:et:sta:sts=2
#########
# Author:        new
# Last Modified: $Date$
# Id:            $Id$
# $HeadURL$
#
use strict;
use warnings;
use ExtUtils::MakeMaker;

# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
	      NAME              => 'Hdf5',
	      VERSION_FROM      => 'lib/Hdf5.pm', # finds $VERSION
	      PREREQ_PM         => {}, # e.g., Module::Name => 1.1
	      ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
	       (ABSTRACT_FROM  => 'lib/Hdf5.pm', # retrieve abstract from module
		AUTHOR         => 'new@sgenomics.co.uk') : ()),
	      LIBS              => ['-lhdf5 -lz -lsz -L~/hdf5/include -L~/szip-2.1/src/.libs '], # e.g., '-lm'
	      DEFINE            => '', # e.g., '-DHAVE_SOMETHING'
	      INC               => '-I. -I/home/user/hdf5/include', # e.g., '-I. -I/usr/include/other'
	      # Un-comment this if you add C files to link with later:
	      # OBJECT            => '$(O_FILES)', # link all the C files too
	     );

if  (eval {require ExtUtils::Constant; 1}) {
  # If you edit these definitions to change the constants used by this module,
  # you will need to use the generated const-c.inc and const-xs.inc
  # files to replace their "fallback" counterparts before distributing your
  # changes.
  ExtUtils::Constant::WriteConstants(
                                     NAME         => 'Hdf5',
                                     NAMES        => [],
                                     DEFAULT_TYPE => 'IV',
                                     C_FILE       => 'const-c.inc',
                                     XS_FILE      => 'const-xs.inc',
				    );
} else {
  use File::Copy;
  use File::Spec;

  for my $file ('const-c.inc', 'const-xs.inc') {
    my $fallback = File::Spec->catfile('fallback', $file);
    copy ($fallback, $file) or die "Can't copy $fallback to $file: $!";
  }
}
