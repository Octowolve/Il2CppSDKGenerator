#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SkeletonBone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SkeletonBone"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& parentName() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppQuaternion> T& rotation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_transformModified() {
		return ((T (*)(SkeletonBone*))(Il2CppBase() + 0x4E82BB8))(this);
	}
	template <typename T = void> T set_transformModified(int32_t value) {
		return ((T (*)(SkeletonBone*, int32_t))(Il2CppBase() + 0x4E82BC0))(this, value);
	}

};

}
