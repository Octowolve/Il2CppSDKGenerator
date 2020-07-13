#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ITdir
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ITdir"));
	}


	template <typename T = void> T add_QueryAllEvent(uintptr_t value) {
		return ((T (*)(ITdir*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_QueryAllEvent(uintptr_t value) {
		return ((T (*)(ITdir*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_QueryTreeEvent(uintptr_t value) {
		return ((T (*)(ITdir*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_QueryTreeEvent(uintptr_t value) {
		return ((T (*)(ITdir*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_QueryLeafEvent(uintptr_t value) {
		return ((T (*)(ITdir*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_QueryLeafEvent(uintptr_t value) {
		return ((T (*)(ITdir*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T Initialize(uintptr_t initInfo) {
		return ((T (*)(ITdir*, uintptr_t))(Il2CppBase() + 0x0))(this, initInfo);
	}
	template <typename T = int32_t> T QueryTree(int32_t treeId) {
		return ((T (*)(ITdir*, int32_t))(Il2CppBase() + 0x0))(this, treeId);
	}
	template <typename T = int32_t> T QueryLeaf(int32_t treeId, int32_t leafId) {
		return ((T (*)(ITdir*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, treeId, leafId);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ITdir*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(ITdir*))(Il2CppBase() + 0x0))(this);
	}

};

}
