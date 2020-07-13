#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class LODGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "LODGroup"));
	}


	template <typename T = float> T get_size() {
		return ((T (*)(LODGroup*))(Il2CppBase() + 0x47A8064))(this);
	}
	template <typename T = void> T set_size(float value) {
		return ((T (*)(LODGroup*, float))(Il2CppBase() + 0x47A80FC))(this, value);
	}
	template <typename T = void> T set_fixedSize(bool value) {
		return ((T (*)(LODGroup*, bool))(Il2CppBase() + 0x47A819C))(this, value);
	}
	template <typename T = int32_t> T get_lodCount() {
		return ((T (*)(LODGroup*))(Il2CppBase() + 0x47A823C))(this);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(LODGroup*, bool))(Il2CppBase() + 0x47A82D4))(this, value);
	}
	template <typename T = void> T set_isUnloaded(bool value) {
		return ((T (*)(LODGroup*, bool))(Il2CppBase() + 0x47A8374))(this, value);
	}
	template <typename T = void> T RecalculateBounds() {
		return ((T (*)(LODGroup*))(Il2CppBase() + 0x47A8414))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetLODs() {
		return ((T (*)(LODGroup*))(Il2CppBase() + 0x47A84AC))(this);
	}
	template <typename T = void> T SetLODs(Il2CppArray<uintptr_t>* lods) {
		return ((T (*)(LODGroup*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47A8544))(this, lods);
	}
	template <typename T = void> T ForceLOD(int32_t index) {
		return ((T (*)(LODGroup*, int32_t))(Il2CppBase() + 0x47A85E4))(this, index);
	}
	template <typename T = void> static T UnloadLowLevelLods() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A8684))(0);
	}
	template <typename T = bool> static T get_enableAutoUnloadLOD() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A8714))(0);
	}
	template <typename T = void> static T set_enableAutoUnloadLOD(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x47A87A4))(0, value);
	}

};

}
