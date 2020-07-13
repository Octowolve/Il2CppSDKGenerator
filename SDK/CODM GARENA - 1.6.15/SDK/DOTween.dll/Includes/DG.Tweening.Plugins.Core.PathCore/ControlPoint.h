#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core.PathCore {

class ControlPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core.PathCore", "ControlPoint"));
	}

	template <typename T = Il2CppVector3> T& a() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& b() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T op_Addition(uintptr_t cp, Il2CppVector3 v) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x44B22D4))(0, cp, v);
	}

};

}
