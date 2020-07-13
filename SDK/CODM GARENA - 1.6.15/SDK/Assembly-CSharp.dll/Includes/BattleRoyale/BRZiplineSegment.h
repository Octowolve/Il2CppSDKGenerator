#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZiplineSegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZiplineSegment"));
	}

	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_Date() {
		return ((T (*)(BRZiplineSegment*))(Il2CppBase() + 0x26791AC))(this);
	}
	template <typename T = Il2CppVector3> T get_StartPosition() {
		return ((T (*)(BRZiplineSegment*))(Il2CppBase() + 0x26791B4))(this);
	}
	template <typename T = Il2CppVector3> T get_EndPosition() {
		return ((T (*)(BRZiplineSegment*))(Il2CppBase() + 0x26791FC))(this);
	}
	template <typename T = void> T Init(uintptr_t date, uintptr_t zipline) {
		return ((T (*)(BRZiplineSegment*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2670350))(this, date, zipline);
	}

};

}
