# $Id: components2defs.py 9716 2009-05-02 18:42:19Z mthuurne $
# Generates the contents of "components_defs.mk".

from components import EmulationCore, iterComponents
from makeutils import extractMakeVariables
from outpututils import rewriteIfChanged

import sys

def iterComponentDefs(probeMakePath):
	probeVars = extractMakeVariables(probeMakePath)

	yield '# Automatically generated by build process.'
	yield 'CORE_LIBS:=%s' % ' '.join(EmulationCore.dependsOn)
	for component in iterComponents():
		yield 'COMPONENT_%s:=%s' % (
			component.makeName,
			str(component.canBuild(probeVars)).lower()
			)

if len(sys.argv) == 3:
	rewriteIfChanged(sys.argv[1], iterComponentDefs(sys.argv[2]))
else:
	print >> sys.stderr, (
		'Usage: python components2defs.py COMPONENTS_DEFS PROBE_MAKE'
		)
	sys.exit(2)