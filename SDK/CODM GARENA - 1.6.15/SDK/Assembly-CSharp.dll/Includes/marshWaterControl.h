#pragma once
#include <Il2Cpp/Il2Cpp.h>

class marshWaterControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "marshWaterControl"));
	}

	template <typename T = Il2CppRect> T& m_waterRect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(marshWaterControl*))(Il2CppBase() + 0x41C73D8))(this);
	}

};

}
