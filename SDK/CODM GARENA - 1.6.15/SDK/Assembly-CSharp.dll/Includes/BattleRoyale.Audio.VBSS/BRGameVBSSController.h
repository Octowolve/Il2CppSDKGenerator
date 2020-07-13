#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale.Audio.VBSS {

class BRGameVBSSController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale.Audio.VBSS", "BRGameVBSSController"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mCurPawns() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mCurUpdateFrameCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mUpdateFrameCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mFrontCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mBackCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mLeftCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mRightCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__GetPlayersFarFromLP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SplitPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdateRTPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(int32_t iMaxPlayer) {
		return ((T (*)(BRGameVBSSController*, int32_t))(Il2CppBase() + 0x2C5BE30))(this, iMaxPlayer);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5BF18))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5CC68))(this);
	}
	template <typename T = void> T _GetPlayersFarFromLP() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5C03C))(this);
	}
	template <typename T = void> T _SplitPlayers() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5C75C))(this);
	}
	template <typename T = void> T _UpdateRTPC(int32_t iFront, int32_t iBack, int32_t iLeft, int32_t iRight) {
		return ((T (*)(BRGameVBSSController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2C5CD00))(this, iFront, iBack, iLeft, iRight);
	}
	template <typename T = int32_t> T get_FrontNum() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5D3A4))(this);
	}
	template <typename T = int32_t> T get_BackNum() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5D3AC))(this);
	}
	template <typename T = int32_t> T get_LeftNum() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5D3B4))(this);
	}
	template <typename T = int32_t> T get_RightNum() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5D3BC))(this);
	}
	template <typename T = int32_t> T get_TotalNum() {
		return ((T (*)(BRGameVBSSController*))(Il2CppBase() + 0x2C5D3C4))(this);
	}

};

}
