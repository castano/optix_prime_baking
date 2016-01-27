
#pragma once

#include <cstddef>

struct SceneMemory {
  virtual ~SceneMemory() { }
};

// forward decl
namespace bake {
  struct Scene;
}

bool load_obj_scene( const char* filename, bake::Scene& scene, float* scene_bbox_min, float* scene_bbox_max, SceneMemory*& memory, size_t num_instances_per_mesh=1 );
