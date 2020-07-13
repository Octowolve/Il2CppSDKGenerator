#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class TacticalRadarCompRushTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "TacticalRadarComp_RushTarget"));
	}

	template <typename T = uintptr_t> T& RushTargetSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_RushGameInfo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarCompRushTarget*))(Il2CppBase() + 0x3F2244C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarCompRushTarget*))(Il2CppBase() + 0x3F226EC))(this);
	}

};

}
