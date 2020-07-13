#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUITargetAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUITargetAttribute"));
	}

	template <typename T = int32_t> T& displayMask() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> static T GetGUITargetAttrValue(uintptr_t klass, Il2CppString* methodName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x479EE30))(0, klass, methodName);
	}

};

}
