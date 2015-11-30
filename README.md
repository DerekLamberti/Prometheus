# Prometheus

Welcome to my promethus project. The code in this repository will form the foundation for a more ambitious project but before we can begin that, we need a framework of libraries and helper classes.

These helper classes/libraries include:
* Math libs (scalar & vector)
* Threading libs
  * Threadpool
  * Fibers
  * Synchronisation primitives
* Memory Allocators
* Logging
* FileIO/Serialisation/Streams
* Random number generators
* Produce patchable binary diff of arbitrary buffers.
* Scene graph library
* Geometry manipulation
  * Best fit bounding box for arbitary point set
  * Delaunay triangulation of arbitrary 2D point set
  * Tetrahedralisation from arbitrary 3D point set
  * Mesh sanitiser (Preserves topology)
	* Split intersecting geometry
	* Remove hidden geometry
	* Optimise geometry