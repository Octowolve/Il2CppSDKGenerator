#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PoisoningEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PoisoningEffect"));
	}

	template <typename T = int32_t> T& OriginWidth() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& OriginHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PoisoningEffect*))(Il2CppBase() + 0x1DEC710))(this);
	}
	template <typename T = void> T AdjustSize() {
		return ((T (*)(PoisoningEffect*))(Il2CppBase() + 0x1DEC7A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PoisoningEffect*))(Il2CppBase() + 0x1DEC868))(this);
	}

};

}
