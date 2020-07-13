#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SelectRandomVector2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SelectRandomVector2"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& vector2Array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeVector2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SelectRandomVector2*))(Il2CppBase() + 0x4FAE424))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SelectRandomVector2*))(Il2CppBase() + 0x4FAE5FC))(this);
	}
	template <typename T = void> T DoSelectRandomColor() {
		return ((T (*)(SelectRandomVector2*))(Il2CppBase() + 0x4FAE61C))(this);
	}

};

}
