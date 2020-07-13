#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRPawnToSafeDotLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRPawnToSafeDotLine"));
	}

	template <typename T = uintptr_t> T& pawnToSafePointLine() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& brGameInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMapMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRPawnToSafeDotLine*))(Il2CppBase() + 0x30BF9F8))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRPawnToSafeDotLine*))(Il2CppBase() + 0x30BFC8C))(this);
	}
	template <typename T = void> T UpdateMapMark() {
		return ((T (*)(TacticalBRPawnToSafeDotLine*))(Il2CppBase() + 0x30BFD30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRPawnToSafeDotLine*))(Il2CppBase() + 0x30C0390))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRPawnToSafeDotLine*))(Il2CppBase() + 0x30C0398))(this);
	}

};

}
