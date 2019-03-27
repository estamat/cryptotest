from distutils.core import setup
setup(name='WIKIspendfrom',
      version='1.0',
      description='Command-line utility for wiki "coin control"',
      author='Gavin Andresen',
      author_email='gavin@wikifoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
