#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class StaticBatchRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "StaticBatchRenderer"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_matIndexes() {
		return ((T (*)(StaticBatchRenderer*))(Il2CppBase() + 0x4E88768))(this);
	}
	template <typename T = void> T set_matIndexes(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(StaticBatchRenderer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E88800))(this, value);
	}
	template <typename T = unsigned char> T get_SubMeshMatCount() {
		return ((T (*)(StaticBatchRenderer*))(Il2CppBase() + 0x4E888A0))(this);
	}
	template <typename T = void> T SetSubMeshMatIndexesAndCount(Il2CppArray<uintptr_t>* matIndexes, unsigned char subMeshMatCount) {
		return ((T (*)(StaticBatchRenderer*, Il2CppArray<uintptr_t>*, unsigned char))(Il2CppBase() + 0x4E88938))(this, matIndexes, subMeshMatCount);
	}
	template <typename T = void> T set_ignorePerformRendering(bool value) {
		return ((T (*)(StaticBatchRenderer*, bool))(Il2CppBase() + 0x4E889E0))(this, value);
	}

};

}
