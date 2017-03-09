#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SceneController
struct SceneController_t38942716;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// MemoryCard
struct MemoryCard_t1289296143;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MemoryCard1289296143.h"

// System.Void SceneController::.ctor()
extern "C"  void SceneController__ctor_m1093984853 (SceneController_t38942716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneController::Start()
extern "C"  void SceneController_Start_m428062893 (SceneController_t38942716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] SceneController::ShuffleArray(System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* SceneController_ShuffleArray_m1120726822 (SceneController_t38942716 * __this, Int32U5BU5D_t3030399641* ___numbers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SceneController::get_canRevealed()
extern "C"  bool SceneController_get_canRevealed_m1880674344 (SceneController_t38942716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneController::CardRevealed(MemoryCard)
extern "C"  void SceneController_CardRevealed_m1169807782 (SceneController_t38942716 * __this, MemoryCard_t1289296143 * ___card0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SceneController::CheckMatch()
extern "C"  Il2CppObject * SceneController_CheckMatch_m220468622 (SceneController_t38942716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneController::Restart()
extern "C"  void SceneController_Restart_m1174127684 (SceneController_t38942716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
