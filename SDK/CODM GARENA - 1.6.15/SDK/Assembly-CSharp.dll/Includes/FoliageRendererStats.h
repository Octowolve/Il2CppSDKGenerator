#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageRendererStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageRendererStats"));
	}

	template <typename T = int32_t> T& visibleCells() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& visibleInstances() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& drawCalls() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FoliageRendererStats*))(Il2CppBase() + 0x3CD7F9C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FoliageRendererStats*))(Il2CppBase() + 0x3CD8114))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(FoliageRendererStats*))(Il2CppBase() + 0x3CD81D4))(this);
	}

};

}
