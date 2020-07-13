#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ClusterTreeNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ClusterTreeNode"));
	}

	template <typename T = int32_t> T& FirstChild() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& LastChild() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& FirstIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LastIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Bounds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LocalBounds() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
