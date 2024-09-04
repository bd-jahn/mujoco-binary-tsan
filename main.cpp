#include <mujoco/mujoco.h>

int main() {
  char error[1024];
  size_t error_sz = 1025;

  static const char *const file = "model.xml";
  mjSpec *spec = mj_parseXML(file, 0, error, error_sz);
  mjModel *model = mj_compile(spec, 0);
  mj_deleteModel(model);
  mj_deleteSpec(spec);
}
