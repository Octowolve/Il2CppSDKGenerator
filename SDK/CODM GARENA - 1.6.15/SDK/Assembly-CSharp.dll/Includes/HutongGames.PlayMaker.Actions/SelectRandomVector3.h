#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SelectRandomVector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SelectRandomVector3"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& vector3Array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeVector3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SelectRandomVector3*))(Il2CppBase() + 0x4FAE6DC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SelectRandomVector3*))(Il2CppBase() + 0x4FAE8B4))(this);
	}
	template <typename T = void> T DoSelectRandomColor() {
		return ((T (*)(SelectRandomVector3*))(Il2CppBase() + 0x4FAE8D4))(this);
	}

};

}
