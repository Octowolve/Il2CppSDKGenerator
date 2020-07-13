#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassShowTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassShowTime"));
	}

	template <typename T = uintptr_t> T& HideObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mCacheTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mCacheSeconds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& mCacheFormat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bRunning() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Show(int32_t seconds, Il2CppString* formatStr) {
		return ((T (*)(BattlePassShowTime*, int32_t, Il2CppString*))(Il2CppBase() + 0x2C3356C))(this, seconds, formatStr);
	}
	template <typename T = Il2CppString*> T GetTimeFormat(int32_t sec) {
		return ((T (*)(BattlePassShowTime*, int32_t))(Il2CppBase() + 0x2C33714))(this, sec);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BattlePassShowTime*))(Il2CppBase() + 0x2C33A78))(this);
	}

};

}
