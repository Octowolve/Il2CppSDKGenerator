#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZiplineSegmentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZiplineSegmentData"));
	}

	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_StartPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_EndPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_Forward() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Magnitude() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountSqrDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindStartPsition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T CountSqrDistance(Il2CppVector3 q) {
		return ((T (*)(BRZiplineSegmentData*, Il2CppVector3))(Il2CppBase() + 0x2667DC4))(this, q);
	}
	template <typename T = Il2CppVector3> T FindStartPsition(Il2CppVector3 pos) {
		return ((T (*)(BRZiplineSegmentData*, Il2CppVector3))(Il2CppBase() + 0x2671FC4))(this, pos);
	}

};

}
